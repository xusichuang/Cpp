#include<iostream>
using namespace std;


// 普通函数与函数模板区别
// 1.普通函数调用时可以发生自动类型转换(隐式类型转换)
// 2.函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
// 3.如果利用  显示指定类型  的发生，可以发生  隐式类型转换

// 普通函数
int myAdd01(int a, int b)
{
	return a + b;
}

// 函数模板
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test041()
{
	// 1.隐式转换
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd01(a, b) << endl;
	// 会自动将c的ASCII码值转成int
	cout << myAdd01(a, c) << endl;

	// 2.自动类型推导
	cout << myAdd02(a, b) << endl;
	// 编译器不知道是转成char还是int
	// cout << myAdd02(a, c) << endl;

	// 3.显示指定类型
	cout << myAdd02<int>(a, c) << endl;
}



int main04()
{
	test041();
	return 0;
}