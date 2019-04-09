 ///
 /// @file    reference.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-04-09 10:09:27
 ///
 
#include <iostream>
using std::cout;
using std::endl;
 
int test0(void)
{
	int number = 100;
	int & ref = number;//这里就是引用初始化过程
	cout << "number = " << number << endl
		 << "ref = " << ref << endl;
	cout << endl;

	ref = 1;
	cout << "number = " << number << endl
		 << "ref = " << ref << endl << endl;
	
	//int & ref2;//引用必须要进行初始化
	

	int number2 = 10;
	ref = number2;//假设这句表达的是 引用改变指向, 通过结果证明假设不成立
				  //引用一经绑定，不会再改变其指向
	cout << "number = " << number << endl
		 << "ref = " << ref << endl 
		 << "number2 = " << number2 << endl;
}

//将引用作为函数的参数进行传递

//值传递 ==> 进行复制
//void swap(int x, int y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}

//地址传递 ==> 本质又是值传递  ==> 进行复制
void swap(int * px, int * py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}


//引用传递, 优势就是直接绑定实参，对形参的操作与实参保持一致
//参数的传递效率更高, 在形式上也更容易理解，更直观
void swap(int & x, int & y)
{
	int temp = x;
	x = y;
	y = temp;
}

int test1(void)
{
	int number1 = 3, number2 = 4;
	cout << "number1 = " << number1 << endl
		 << "number2 = " << number2 << endl;
	swap(number1, number2);//int & x = number1; int & y = number2
	//swap(&number1, &number2);
	cout << "number1 = " << number1 << endl
		 << "number2 = " << number2 << endl;
	return 0;
}

int array[5] = {1, 2, 3, 4, 5};//位于全局/静态区

int index(int idx)
{
	return array[idx];//return时会进行复制
}

//返回的是一个引用，就是一个左值
//返回的值其生命周期一定要是大于函数的生命周期的
int & index2(int idx)
{
	return array[idx];//如果返回值是引用，那就不会进行复制
}

//不能返回一个局部变量的引用
int & index3()
{
	int number = 10;//局部变量, 函数栈空间
	cout << "index3()..." << endl;
	return number;
}


void test2()
{
	cout << "index(1) = " << index(1) << endl;
	int number = index(1);
	cout << "number = " << number << endl;
	//index(1) = 10;//什么是左值，右值 ; 左值就是能够存储在内存中，被持久化的变量
	//&index(1);//右值, 不能取地址, 是一个临时变量

	&index2(0);
	index2(0) = 10;
	cout << "array[0] = " << array[0] << endl;
}

void test3()
{
	cout << "index3() = " << index3() << endl;
	cout << "111" << endl;
	int & number = index3();
	cout << "number = " << number << endl;
}

//不要轻易返回一个堆空间变量的引用；
//如要就要这样做，那一定要想好内存回收的策略
int & getNumber()
{
	int * pNumber = new int(10);
	return *pNumber;
}

void test4()
{
	int number = getNumber();//内存泄漏, 对number进行初始化

	int & number2 = getNumber();//直接拿到堆空间的值
	delete &number2;

	int a = 3, b = 4;
	int c = a + getNumber() + b;//内存泄漏
}

int main(void)
{
	//test2();
	test3();
	return 0;
}
