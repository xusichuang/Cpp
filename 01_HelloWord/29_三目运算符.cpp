#include<iostream>
using namespace std;

int main29()
{
	// 语法：表达式1 ？ 表达式2：表达式3
	// 如果表达式1为真，则返回表达式2的结果
	// 如果表达式1为假，则返回表达式3的结果
	int a = 10;
	int b = 20;
	int c;
	c = (a > b ? a : b);
	cout << "c=" << c << endl;

	// 在C++中三目运算符返回的是变量，则可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}