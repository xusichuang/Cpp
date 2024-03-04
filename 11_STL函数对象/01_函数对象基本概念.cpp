
/*
函数对象概念
	重载函数调用操作符的类，其对象成为函数对象
	函数对象使用重载的()时，行为类似仿函数调用，也叫仿函数

本质：
	函数对象（仿函数）是一个类，不是一个函数


特点：
	函数对象在使用时，可以想普通函数那样调用，可以有参数，可以有返回值
	函数对象超出普通函数的概念，函数对象可以有自己的状态
	函数对象可以作为参数传递
*/
#include<iostream>
#include<string>
using namespace std;

// 函数对象在使用时，可以想普通函数那样调用，可以有参数，可以有返回值
class MyAdd
{
public:
	

	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

// 函数对象超出普通函数的概念，函数对象可以有自己的状态
class MyPrint
{
public:
	int cnt;
	MyPrint()
	{
		this->cnt = 0;
	}
	void operator()(string str)
	{
		cout << str << endl;
		cnt++;
	}
};

void test011()
{
	// my_add称为函数对象
	MyAdd my_add;
	cout << my_add(10, 20) << endl;;
}

void test012()
{
	MyPrint my_print;
	my_print("hellp_world");
	my_print("hellp_world");
	my_print("hellp_world");
	my_print("hellp_world");

	cout << "myprint调用" << my_print.cnt << "次" << endl;
}

//函数对象作为参数传递
void do_print(MyPrint& mp,string str)
{
	mp(str);
}

void test013()
{
	MyPrint mp;
	do_print(mp, "I am programmer");
}

int main01()
{
	test011();
	test012();
	test013();
	return 0;
}