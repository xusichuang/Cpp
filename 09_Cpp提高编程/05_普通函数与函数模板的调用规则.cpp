#include<iostream>
using namespace std;


// 普通函数与函数模板的调用规则
// 1.如果函数模板和普通函数都可以实现，有优先调用普通函数
// 2.可以通过空模板参数列表来强制调用函数模板
// 3.函数模板也可以发生重载
// 4.如果函数模板可以产生更好的匹配，优先调用函数模板

void myPrint(int a, int b)
{
	cout << "调用普通函数" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "调用模板函数" << endl;
}

template<class T>
void myPrint(T a, T b,T c)
{
	cout << "调用重载的模板函数" << endl;
}


void test051()
{
	int a = 10;
	int b = 20;
	// 1.优先调用普通函数
	myPrint(a, b);

	// 2.通过空模板参数列表来强制调用函数模板
	myPrint<>(a, b);

	// 3.函数模板也可以发生重载
	myPrint(a, b, 100);

	// 4.如果函数模板可以产生更好的匹配，优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';

	// 优先调用函数模板
	myPrint(c1, c2);


}


int main05()
{
	test051();
	return 0;
}