#include<iostream>
using namespace std;

// 函数重载
// 作用：函数名可以相同，提高复用性

// 函数重载满足条件：
// 1.同一个作用域下
// 2.函数名相同
// 3.函数参数类型不同 或者 个数不同 或者顺序不同

// 注意：函数的返回值不可以作为函数重载的条件!!!

// func在全局作用域
void func(double val)
{
	cout << "func的调用  "<< "val=" << val << endl;
}

void func(int val=10)
{
	cout << "func的调用  " << "val=" << val << endl;
}

void func(int val1, double val2)
{
	cout << "func的调用  "<< endl;
	cout << "val1=" << val1 << endl;
	cout << "val2=" << val2 << endl;
}

void func(double val1, int val2)
{
	cout << "func的调用  " << endl;
	cout << "val1=" << val1 << endl;
	cout << "val2=" << val2 << endl;
}


// 注意：函数的返回值不可以作为函数重载的条件!!!
/*int func(double val1, int val2)
{
	cout << "func的调用  " << endl;
	cout << "val1=" << val1 << endl;
	cout << "val2=" << val2 << endl;
	return val1;
}*/

int main12()
{
	
	func(10);
	func(10.1);
	func(10, 20.3);
	func(10.3, 20);
	return 0;
}