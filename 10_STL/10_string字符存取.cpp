#include<iostream>
using namespace std;

// string中单个字符存取的方式右两种
//				char& operator[](int n)			//通过[]方式取字符
//				char& at(int n)					//通过at方法获取字符


void test101()
{
	string str = "hello";
	cout << "str=" << str << endl;

	//1.通过[]方式取字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	//2.通过at方法获取字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	// 修改单个字符用''  字符串用"" 
	str[0] = 'x';
	cout << "str=" << str << endl;
	str.at(1) = 'x';
	cout << "str=" << str << endl;
}


int main10()
{
	test101();
	return 0;
}