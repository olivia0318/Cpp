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
void display();
}//end of namespace wd

namespace wd
{
void show();
}

namespace tls
{

int number = 11;

void display()
{
	cout << "tls::display()" << endl;
	wd::display();
}

}//end of namespace tls

namespace wd
{
//在命名空间之中，可以定义任意的实体
int number = 100;

void display()
{
	cout << "wd::display()" << endl;
}

void show()
{
	cout << "wd::show()" << endl;
	tls::display();
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

int main(void)
{
	//cout << "number = " << wd::number << endl;// :: 作用域限定符 
	//display();
	
	//wd::lwh::display(1000);
	wd::show();
	return 0;
}
