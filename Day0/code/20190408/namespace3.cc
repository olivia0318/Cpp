 ///
 /// @file    namespace1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-04-08 16:06:06
 ///

#include <iostream>

using std::cout;//using声明机制
using std::endl;

int number = 10;

namespace wd
{
//在命名空间之中，可以定义任意的实体
int number = 100;

void display()
{
	cout << "wd::display()" << endl;
}

namespace lwh
{
int number = 1;

void display(int number)
{
	cout << "wd::lwh::display()" << endl;
	cout << "wd::lwh::number = " << lwh::number << endl;//就近原则
	cout << "形参number = " << number << endl;
	cout << "wd::number = " << wd::number << endl;
	cout << "全局number = " << ::number << endl;//匿名的命名空间
}

}//end of namespace lwh

}//end of namespace wd

namespace tls
{
int number = 11;
}//end of namespace tls


//using wd::number;   //error，不能进行
//use_faceting tls::number;

int main(void)
{
    using wd::lwh::display;
    display(1000);
	return 0;
}
