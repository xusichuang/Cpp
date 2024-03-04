#include<iostream>
using namespace std;

// 学习目标：
// 掌握类目标配合友元函数的类内和类外实现


// 全局函数类内实现   ---直接在类内声明友元即可
// 全局函数类外实现   ---需要提前让编译器知道全局函数的存在（不实用）

template<class T1,class T2>
class Person
{
	
private:
	T1 m_Name;
	T2 m_Age;
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}


	// 1.全局函数类内实现
	// 不加friend为成员函数，加friend为全局函数
	friend void showInfo(Person<T1, T2>& p)
	{
		cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
	}

	
};

void test151()
{
	Person<string, int> p("张三", 15);
	showInfo(p);
}



int main15()
{
	test151();
	return 0;
}