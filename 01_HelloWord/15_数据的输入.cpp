#include<iostream>
using namespace std;

int main15()
{
	// 数据的输入：关键字 cin
	// 语法： cin >> 变量

	// 1. 整型
	/*
	int a = 0;
	cout << "a=" << a << endl;
	cout << "请给整型变量a赋值:" << endl;
	cin >> a;
	cout << "a=" << a << endl;

	// 2.浮点数
	float b = 3.14f;
	cout << "请给浮点型变量b赋值" << endl;
	cin >> b;
	cout << "b=" << b << endl;*/

	// 5.布尔类型
	// 注意：0.000类型的值布尔值为false
	bool flag = false;
	cout << "请给布尔类型变量flag赋值";
	cin >> flag;
	cout << "布尔类型flag=" << flag << endl;

	return 0;
}