 ///
 /// @file    test.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-04-09 16:24:07
 ///
 
#include "inline2.h" 
//#include "test.h"

#include "inline2.h"
#include "inline2.h"
//使用双引号，查找头文件时，会从当前路径下进行查找
//当前路径下找不到时，接着系统路径下查找

//使用尖括号表示的是，查找头文件时，直接从系统路径下查找
#include <iostream> 
using std::cout;
using std::endl;
 
int main(void)
{
	int x1 = 3, x2 = 4;
	cout << "max(x1, x2) = " << max(x1, x2) << endl;
	return 0;
}
