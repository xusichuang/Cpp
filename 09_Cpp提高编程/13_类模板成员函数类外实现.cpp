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
		cout << "������" << this->m_Name << "���䣺" << this->m_Age << endl;
	}*/
};

// ���캯������ʵ��
template<class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}

// ��Ա��������ʵ��
template<class T1, class T2>
void Person<T1, T2>::showInfo()
{
	cout << "������" << this->m_name << "���䣺" << this->m_age << endl;
}


void test131()
{
	Person<string, int> p("����",12);
	p.showInfo();
}


int main13()
{
	test131();
	return 0;
}