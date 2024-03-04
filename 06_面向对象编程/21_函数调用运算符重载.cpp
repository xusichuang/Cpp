#include<iostream>
using namespace std;



// 函数调用运算符重载
class MyPrint
{
public:

	// 重载函数调用运算符
	// operator()代表函数名
	// 第二个()代表要传入的参数
	void operator()(string text)
	{
		cout << text << endl;
	}
};

void test211()
{
	MyPrint mp;
	// 由于使用起来非常类似于函数调用，因此称为仿函数
	mp("hello world");
}

// 仿函数非常灵活，没有固定的写法
class Myadd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test212()
{
	Myadd myadd;
	int res = myadd(1, 2);
	cout << res << endl;

	//匿名函数对象
	cout << Myadd()(100, 200) << endl;
}



int main21()
{
	test211();
	test212();
	return 0;
}