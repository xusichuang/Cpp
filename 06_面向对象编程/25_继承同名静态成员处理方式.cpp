#include<iostream>
using namespace std;


// 静态成员和非静态成员出现同名，处理方式一致
//1.访问子类同名成员  直接访问即可
//2.访问父类同名成员  需要加作用域

class Base
{
public:
	// 静态成员属性
	// 1.编译时分配内存
	// 2.所有对象共享一份数据
	// 3.类内声明，类外初始化
	static int m_A;

	static void func()
	{
		cout << "Base下静态成员函数调用" << endl;
	}

};
// 类外初始化
int Base::m_A = 100;


class Son :public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son下静态成员函数调用" << endl;
	}
};
int Son::m_A = 200;

// 同名静态成员属性
void test251()
{
	Son s;
	// 1.通过对象访问
	cout << "Son 下同名静态成员属性m_A=" << s.m_A << endl;

	cout << "Base 下同名静态成员属性m_A=" << s.Base::m_A << endl;
	// 2.通过类名
	cout << "Son 下同名静态成员属性m_A=" << Son::m_A << endl;

	cout << "Base 下同名静态成员属性m_A=" << Son::Base::m_A << endl;

}

// 同名静态成员函数
void test252()
{
	Son s2;
	s2.func();

	s2.Base::func();
}

int main25()
{
	test251();
	test252();
	return 0;
}