 ///
 /// @file    string.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-04-09 17:07:00
 ///
 
#include <stdio.h>
#include <string.h>

#include <iostream>
using std::cout;
using std::endl;
using std::string;

void test0()
{
	//C风格字符串
	int number = 10;
	const char * pstr = "hello,world";//位于文字常量区, 只读
	//*pstr = 'H';//error

	printf("&number = %p\n", &number);
	printf("pstr = %s\n", pstr);
	printf("pstr address = %p\n", pstr);

	char parray[] = "hello,world";//字符数组
	printf("parray = %s\n", parray);
	printf("&parray = %p\n", &parray);
	printf("sizeof(parray) = %ld\n", sizeof(parray));
	printf("strlen(parray) = %ld\n", strlen(parray));

	for(int idx = 0; idx != sizeof(parray); ++idx)
	{
		printf("%c", parray[idx]);
	}
	printf("\n");
}

void test1()
{
	string s1 = "hello,world";//将C风格字符串转换成C++风格字符串
	cout << "s1 = " << s1 << endl;

	//获取字符串长度
	cout << "s1's size = " << s1.size() << endl;
	cout << "s1's size = " << s1.length() << endl;

	//遍历字符串
	for(size_t idx = 0; idx != s1.size(); ++idx) 
	{
		cout << s1[idx] << endl;
	}

	//字符串拼接操作
	string s2 = "wangdao";
	string s3 = s1 + s2;
	cout << "s3 = " << s3 << endl;
	
	s2.append(",shenzhen");
	cout << "s2 = " << s2 << endl;
	
	//截取子串
	string s4 = s2.substr(s2.find("shenzhen"), 8);
	cout << "s4 = " << s4 << endl;

}
 
int main(void)
{
	//test0();
	test1();
	return 0;
}
