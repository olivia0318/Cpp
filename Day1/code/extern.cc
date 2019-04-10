 ///
 /// @file    overload.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-04-09 14:49:24
 ///
 
#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

//C++语言本身支持函数重载
//实现原理: 名字改编(name mangling)
//具体的操作步骤： 当函数名称相同时，根据参数的类型、顺序、个数
//不同进行改编

//函数本身就是一种类型
//
//C与C++的混合编程
//
#ifdef __cplusplus
extern "C" { //在C++之中，希望用C的方式调用函数
#endif
int add(int x, int y)
{
	return x + y;
}
#ifdef __cplusplus
}//end of extern "C"
#endif

double add(double x, double y)
{
	return x + y;
}

double add(int x, double y)
{
	return x + y;
}

double add(double x, int y)
{
	return x + y;
}

int add(int x, int y, int z)
{
	return x + y + z;
}
 
int main(void)
{
	int a = 3, b = 4, c = 5;
	printf("a + b = %d\n", add(a, b));
	printf("a + b + c = %d\n", add(a, b, c));
	return 0;
}
