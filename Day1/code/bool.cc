 ///
 /// @file    bool.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-04-09 15:58:01
 ///
 
#include <iostream>
using std::cout;
using std::endl;
 
int main(void)
{
	bool b1 = 1;
	bool b2 = 0;
	bool b3 = -1;
	bool b4 = true;
	bool b5 = false;
	cout << "b1 = " << b1 << endl
		 << "b2 = " << b2 << endl
		 << "b3 = " << b3 << endl
		 << "b4 = " << b4 << endl
		 << "b5 = " << b5 << endl;
	cout << "sizeof(bool) = " << sizeof(bool) << endl;
	//bool/char/short/int/long/long long

	return 0;
}
