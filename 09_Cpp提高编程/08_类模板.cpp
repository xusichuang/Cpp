#include<iostream>
using namespace std;

// template<class T>
// ����


// ���ģ������������������
template<class Name_Type, class Age_Type>
class Person
{
public:
	Name_Type m_Name;
	Age_Type m_Age;


	Person(Name_Type name, Age_Type age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showInfo()
	{
		cout << "������" << this->m_Name << "���䣺" << this->m_Age << endl;
	}
};


void test081()
{
	Person<string, int> p1("����", 10);
	p1.showInfo();
}

int main08()
{
	test081();
	return 0;
}