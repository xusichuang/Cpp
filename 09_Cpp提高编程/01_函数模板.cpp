
#include<iostream>
using namespace std;

// C++另一种编程思想称之为“泛型编程”，主要利用的技术就是模板
// C++提供两种模板机制“函数模板”和“类模板”

// 函数模板的作用：
// 建立一个通用的函数，其函数返回值和形参类型可以不具体制定，用一个  虚拟的类型  来代表


// 语法：
// template<typename T>
// 函数声明或定义

// template:声明创建模板
// typeame:表名其后面的符号是一种数据类型，可以用class代替
// T:通用的数据类型，名称可以替换，通常为大写字母



// 两个整数交换
void swapINT(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

// 交换两个浮点型函数
void swapdouble(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = tmp;
}

// 类型太多，会有无数个
// 函数模板
template<typename T>    // 声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用的数据类型
void mySwap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}


void test01()
{
	int a = 10;
	int b = 20;

	// 利用函数模板交换
	// 两种方式使用函数模板
	// 1.自动类型推导
	mySwap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	// 2.指定数据类型  T=int
	mySwap<int>(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}



// 函数模板利用关键字template
// 函数模板的两种使用方式：自动类型推导、显示指定类型
// 模板的目的是为了提高复用性，将类型参数化
int main01()
{
	test01();
	return 0;
}