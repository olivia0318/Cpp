 ///
 /// @file    namespace1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-04-08 16:06:06
 ///

#include <iostream>

//using namespace std;//using编译指令, 目前来说，不建议使用这种方式

namespace wd
{
//在命名空间之中，可以定义任意的实体
int number = 100;

void display()
{
	std::cout << "wd::display()" << std::endl;
}

}
 
int main(void)
{
	std::cout << "number = " << wd::number << std::endl;// :: 作用域限定符 
	wd::display();

	return 0;
}
