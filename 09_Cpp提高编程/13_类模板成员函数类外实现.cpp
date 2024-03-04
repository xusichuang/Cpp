#include<iostream>
using namespace std;

template<class T1,class T2>
class Person
{
public:
	T1 m_name;
	T2 m_age;

	Person(T1 name, T2 age);
	/*{
		this->m_name = name;
		this->m_age = age;
	}*/

	void showInfo();
	/*{
		cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
	}*/
};

// 构造函数类外实现
template<class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}

// 成员函数类外实现
template<class T1, class T2>
void Person<T1, T2>::showInfo()
{
	cout << "姓名：" << this->m_name << "年龄：" << this->m_age << endl;
}


void test131()
{
	Person<string, int> p("张三",12);
	p.showInfo();
}


int main13()
{
	test131();
	return 0;
}