 ///
 /// @file    new.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-04-09 11:20:52
 ///
 
#include <stdlib.h>    //C的头文件放在CPP头文件的上面
#include <string.h>

#include <iostream>
using std::cout;
using std::endl;


//野指针
//内存泄漏
//内存踩踏

void test0()
{
	int * pInt = (int *)malloc(sizeof(int));
	*pInt = 10;//赋值语句
	cout << "*pInt = " << *pInt << endl;
	free(pInt);

	int * array = (int *)malloc(sizeof(int) * 10);
	memset(array, 0, sizeof(int) * 10);

	for(int idx = 0; idx != 10; ++idx) 
	{
		array[idx] = idx;
	}

	for(int idx = 0; idx != 10; ++idx)
	{
		cout << array[idx] << " ";
	}
	cout << endl;

	cout << "array = " << array << endl;
	free(array);
	array = nullptr;//加上这个防御性措施, 防止出现野指针
	///...
	
	//如果在此之后，继续使用array, 他就变成一个野指针
	cout << "array = " << array << endl;
}

void test1()
{
	int * pInt = new int(10);//执行new表达式时，就已经初始化完毕
	cout << "*pInt = " << *pInt << endl;

	delete pInt;

	///int * pInt2 = new int[10];//只会开空间，不会初始化
	int * pInt2 = new int[10]();////开空间，进行初始化，初始化为0

	delete [] pInt2;
}
 
void test2()
{
	int * p1;//野指针
	cout << "p1 = " << p1 << endl;
}

int main(void)
{
	test0();
	//test1();
	//test2();
	return 0;
}
