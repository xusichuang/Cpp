#include<iostream>
using namespace std;


// 字符串之间比较
// 比较方式
// 字符串比较是按字符的ASCII码进行对比
//		=返回0
//		>返回1
//		<返回-1


// 函数原型：
//			int compare(const string& s)const;
//			int compare(const char* s) const;


void test091()
{
	string str1 = "hello";
	string str2 = "hello";

	// 一般只比较是否相等
	if (str1.compare(str2) == 0)
	{
		cout << "str1等于str2" << endl;
	}
	else if (str1.compare(str2)>0)
	{
		cout << "str1大于str2" << endl;
	}
	else
	{
		cout << "str1小于str2" << endl;
	}
}

int main09()
{
	test091();
	return 0;
}