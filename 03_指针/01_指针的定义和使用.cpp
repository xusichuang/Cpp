#include<iostream>
using namespace std;

// 可以通过指针来保存一个地址，即指针就是一个地址

int main01()
{
	// 1.定义一个指针
	int a = 10;
	// 指针定义的语法：数据类型* 指针变量
	int *p;
	// 让指针记录a的地址
	p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "a的地址为：" << p << endl;

	
	// 2.使用指针
	// 可以通过解引用的方式来找到指针指向的内存
	// 指针前加 * 代表解引用，找到指针变量指向内存中的数据
	cout << "a=" << a << endl;
	cout << "a=" << *p << endl;

	return 0;
}