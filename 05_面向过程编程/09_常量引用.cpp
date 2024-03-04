#include<iostream>
using namespace std;

// 常量引用主要是用来修饰形参，防止误操作

void showValue(const int& val)
{
	// val = 1000;
	cout << "val=" << val << endl;
}


int main09()
{
	int a = 10;
	int& ref = a;  //引用必须引一块合法的地址

	// 加上const之后编译器自动将代码进行下面操作 
	// int temp = 10;  int& m = temp;
	// 加上const之后变为只读，不可修改
	const int& m = 10;

	showValue(ref);
	cout << "a=" << a << endl;

	return 0;
}