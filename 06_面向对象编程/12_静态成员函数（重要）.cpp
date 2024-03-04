#include<iostream>
using namespace std;
// 静态成员变量
// 1.所有对象共享同一份数据
// 2.在编译阶段分配内存
// 3.类内声明，类外初始化


//静态成员函数
// 1.所有对象共享同一个函数
// 2.静态成员函数只能访问静态成员变量

class Person
{
public:
	// 静态成员函数只能访问静态成员变量
	// 静态成员函数
	static void func()
	{
		cout << "static void func的调用" << endl;
		m_A1 = 100;
		// m_B = 2000; 会报错
		cout << m_A1 << endl;
	}

	
	// 静态成员变量 m_A
	static int m_A1;

	// 普通成员变量
	int m_B;



	// 静态成员函数也是有访问权限的
private:
	static void func2()
	{
		cout << "static void func的调用" << endl;
		m_A1 = 100;
		// m_B = 2000; 会报错
	}
};
// 类外初始化
int Person::m_A1 = 200;


void test012()
{
	// 两种访问方式
	// 1.通过对象访问
	Person p;
	p.func();

	// 2.通过类名访问
	Person::func();


	//Person::func2();      类外访问不到私有静态成员函数
}

int main12()
{
	test012();
	return 0;
}