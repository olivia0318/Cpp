 ///
 /// @file    namespace.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-04-09 09:41:35
 ///
 
#include <stdio.h>
#include <iostream>
using namespace std;//把std空间中的所有实体一次性全部引入

void cout()
{
	////cout << "cout()" << endl;
	printf("cout\n");
}
 
int main(void)
{
	//cout << "hello,world!" << endl;
	cout();

	return 0;
}
