#include<iostream>
using namespace std;

// 在C++类内的成员变量和成员函数分开存储
// 只有非静态成员变量才属于类的对象上


class Person
{
	// 非静态成员，属于类的对象上（4字节）
	int m_A;
	// 静态成员变量，不属于类的对象上
	static int m_B;
	// 非静态成员函数，不属于类的对象上
	void func013()
	{

	}
	// 静态成员函数，不属于类的对象上
	static void func0131()
	{

	}

	// 注意：是否属于类的对象上可以通过sizeof（p）的大小来判断
};

void test013()
{
	Person p;
	// 空对象占用内存空间大小：1字节
	// C++编译器会给每个空对象分配一个字节空间，是为了区分对象占内存的位置
	// 每个空对象有一个独一无二的内存地址
	cout << "p占" << sizeof(p) << "字节的空间大小" << endl;

}


void test0131()
{
	Person p;
	cout << "p占" << sizeof(p) << "字节的空间大小" << endl;
}


int main13()
{
	test013();

	test0131();
	return 0;
}