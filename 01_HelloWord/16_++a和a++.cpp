#include<iostream>

using namespace std;

int main16()
{
	// 前置递增：先让变量+1再进行表达式运算
	int a1 = 10;
	int b1 = ++a1 * 10;
	cout << "b1=" << b1 << endl;

	// 后置递增:先进行表达式运算再让变量+1
	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "b2=" << b2 << endl;
	return 0;
}