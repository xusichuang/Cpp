#include<iostream>
using namespace std;


// ѧϰĿ�꣺
// ������Ŀ���Ա�������ļ���д�����������Լ��������

// ���⣺
// ��Ŀ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���

// �����
// 1.ֱ�Ӱ���.cppԴ�ļ�
// 2.��������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp     ס��hpp��Լ�������ƣ�������ǿ��



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
	cout << "������" << this->m_name << "���䣺" << this->m_age << endl;
}


void test141()
{
	Person<string, int> p("����", 15);
	p.showInfo();

}

int main14()
{
	test141();
	return 0;
}