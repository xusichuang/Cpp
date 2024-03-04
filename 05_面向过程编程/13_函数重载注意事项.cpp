#include<iostream>
using namespace std;


// 函数重载的注意事项
// 1.引用作为重载的条件
void fun(int& a)
{
	cout << "函数func的调用:int& a" << endl;
}

void fun(const int& a)
{
	cout << "函数func的调用:const int& a" << endl;
}

// 2.函数重载碰到默认参数
void fun2(int a,int b=10)
{
	cout << "函数fun2的调用:int a" << endl;
}

void fun2(int a)
{
	cout << "函数fun2的调用:int a" << endl;
}

int main13()
{
	fun(10);
	int a = 10;
	fun(a);

	// 当函数有默认参数，编译器不知道调用哪一个
	// 写函数重载尽量不要加默认参数
	// fun2(2);
	return 0;
}