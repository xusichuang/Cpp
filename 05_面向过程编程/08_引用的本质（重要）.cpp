#include<iostream>
using namespace std;

// 引用的本质是在C++内部实现一个指针常量！！！

void func(int& ref)
{
	ref = 100;
}


int main08()
{
	int a = 10;
	// 引用自动转换为int * const ref = &a，指针常量是的指针指向不可修改
	int& ref = a;
	// 内部发现ref是引用，自动帮我们转换为 *ref = 20
	ref = 20;
	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;

	func(a);
	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;

	return 0;
}