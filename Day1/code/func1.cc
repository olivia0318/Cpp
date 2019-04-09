 ///
 /// @file    func1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-04-09 10:04:20
 ///
 
#include <iostream>
using std::cout;
using std::endl;

void display()
{
	cout << "display()" << endl;
}

void show()
{
	cout << "show()" << endl;
}

void(*p)() = display;

typedef void(*Function)();
 
int main(void)
{
	p();

	Function f1 = display;
	f1();

	f1 = show;
	f1();
	return 0;
}
