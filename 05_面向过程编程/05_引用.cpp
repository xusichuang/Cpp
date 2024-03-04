#include<iostream>
using namespace std;


int main05()
{
	// 引用的作用：给变量起别名
	int a = 10;
	// 语法：数据类型 &别名 = 原名
	int& b = a;
	cout <<"a=" << a << endl;
	cout << "b=" << b << endl;
	b = 20;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	a = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	// 引用注意事项
	// 1.引用必须初始化
	// int& b = a;
	// 2.引用在初始化后，不可以改变
	// int& b = c   已经初始化为a，就再修改为c


	return 0;
}