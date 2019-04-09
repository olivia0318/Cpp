 ///
 /// @file    const.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-04-08 17:04:18
 ///
 
#include <iostream>
using std::cout;
using std::endl;

//源程序 --> 预处理 --> 编译 --> 汇编 --> 链接 --> 可执行程序
#define NUMBER 100

//宏定义发生时机： 预处理, 仅仅只是字符串的替换
//
//const关键字代表的常量发生时机: 编译, 是有类型检查
//
//建议: 定义常量时， 多用const来替换宏定义, 这样可以降低犯错误的概率

//内置类型

void test0()
{
	//初始化
	const int number = 10;
	//const int number;//error 常量必须要进行初始化
	//int number2;//未初始化
	//int number2 = 1;
	int number2(1);//C++ 初始化
	std::string s1("hello");//相当于一个内置类型

	cout << "number = " << number << endl;
	number2 = 1;//赋值操作
	cout << "number2 = " << number2 << endl;
	cout << "s1 = " << s1 << endl;

	//number = 11;//赋值操作
}

//数组指针   指针数组
//函数指针   指针函数
//常量指针   指针常量

void test1()
{
	int number = 1;
	int number2 = 11;
	const int * p = &number;//常量指针(pointer to const)
	//*p = 10;//error,不能通过指针修改所指变量的值
	cout << "p = " << p << endl;
	p = &number2;//ok,  p可以改变指向
	cout << "p = " << p << endl;
	//number = 111;
	cout << "number = " << number << endl;
	cout << "*p = " << *p << endl << endl;

	int const * p2 = &number;//同p是一样的
	//*p2 = 111;
	p2 = &number2;

	int * const p3 = &number;// 指针常量(const pointer) 
	cout << "p3 = " << p3 << endl;
	cout << "number = " << number << endl;
	*p3 = 111;//ok 
	//p3 = &number2;//error
	cout << "number = " << number << endl;
	cout << "*p3 = " << *p3 << endl;
	cout << "p3 = " << p3 << endl;

}
 
int main(void)
{
	//test0();
	test1();
	return 0;
}
