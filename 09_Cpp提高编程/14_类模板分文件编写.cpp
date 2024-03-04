#include<iostream>
using namespace std;


// 学习目标：
// 掌握类目标成员函数分文件编写产生的问题以及解决问题

// 问题：
// 类目标中成员函数创建时机是在调用阶段，导致分文件编写时链接不到

// 解决：
// 1.直接包含.cpp源文件
// 2.将声明和实现写道同一个文件中，并更改后缀名为.hpp     住：hpp是约定的名称，并不是强制



template<class T1, class T2>
class Person
{
public:
	T1 m_name;
	T2 m_age;

	Person(T1 name, T2 age);

	void showInfo();
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}

template<class T1, class T2>
void Person<T1, T2>::showInfo()
{
	cout << "姓名：" << this->m_name << "年龄：" << this->m_age << endl;
}


void test141()
{
	Person<string, int> p("张三", 15);
	p.showInfo();

}

int main14()
{
	test141();
	return 0;
}