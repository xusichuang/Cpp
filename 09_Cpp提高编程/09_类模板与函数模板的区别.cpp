#include<iostream>
using namespace std;

// ��ģ���뺯��ģ�������
// 1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
// 2.��ģ����ģ������б��п�����Ĭ�ϲ���


// ��ģ��
template<class Name_Type,class Age_Type>
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


// 1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
void test091()
{
	// Person p("����", 100);  �޷��Զ��Ƶ�
	Person<string,int> p("����", 100);
	p.showInfo();
}




// ��ģ��
template<class Name_Type, class Age_Type=int>
class Person2
{
public:
	Name_Type m_Name;
	Age_Type m_Age;

	Person2(Name_Type name, Age_Type age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showInfo()
	{
		cout << "������" << this->m_Name << "���䣺" << this->m_Age << endl;
	}

};
// 2.��ģ����ģ������б��п�����Ĭ�ϲ���
void test092()
{
	Person2<string> p("����", 199);
	p.showInfo();
}

int main09()
{
	test091();
	test092();
	return 0;
}