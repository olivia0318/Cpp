 ///
 /// @file    default.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-04-09 15:16:27
 ///
 
#include <iostream>
using std::cout;
using std::endl;

//默认参数(缺省参数)
//如果某一个参数被设为缺省参数之后，其后的所有参数必须也设置为
//缺省参数
//
//缺省参数的设置是遵循从右到左的顺序
//
//注意: 在使用缺省参数时要注意别产生了二义性
int add(int x, int y = 0)
{
	return x + y;
}

int add(int x, int y = 0, int z = 0)
{
	return x + y + z;
}
 
int main(void)
{
	int a = 3, b = 4, c = 5;
	cout << "add(a,b) = " << add(a, b) << endl
		 << "add(a) = " << add(a) << endl;
	cout << "add() = " << add() << endl;
	add(a, b, c);

	return 0;
}
