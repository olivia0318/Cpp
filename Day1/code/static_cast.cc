 ///
 /// @file    static_cast.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-04-09 14:30:32
 ///
 
#include <iostream>
using std::cout;
using std::endl;
 
int test0(void)
{
	double x = 1.11;
	int y = (int)x;
	int z = int(x);

	cout << "y = " << y << endl;
	cout << "z = " << z << endl;


	int * pInt = (int*)malloc(sizeof(int));
	return 0;
}

int test1(void)
{
	double x = 1.11;
	int y = static_cast<int>(x);
	int * pInt = static_cast<int*>(malloc(sizeof(int)));

	cout << "y = " << y << endl;
	return 0;
}
//
//dynamic_cast / const_cast/ reinterpret_cast
