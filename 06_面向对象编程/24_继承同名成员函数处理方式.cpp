#include<iostream>
using namespace std;


// 继承中同名成员处理
// 同名情况，子类会覆盖父类同名成员属性或函数！！！

class Base
{
public:
	int m_A;
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base下的func函数调用" << endl;
	}
};


class Son :public Base
{
public:
	int m_A;
	Son()
	{
		m_A = 1200;
	}

	void func()
	{
		cout << "Son下的func函数调用" << endl;
	}
};

// 同名成员属性
void test241()
{
	Son s1;
	
	cout << "Son 下的m_A=" << s1.m_A << endl;
	// 如果通过子类对象 访问到父类中同名成员，则需要加作用域!!!
	cout << "Base下的m_A=" << s1.Base::m_A << endl;
}

// 同名成员函数
void test242()
{
	Son s2;
	s2.func();
	s2.Base::func();
}

int main24()
{
	test241();
	test242();
	return 0;
}