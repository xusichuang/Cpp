#include<iostream>
using namespace std;

// ѧϰĿ�꣺
// ������Ŀ�������Ԫ���������ں�����ʵ��


// ȫ�ֺ�������ʵ��   ---ֱ��������������Ԫ����
// ȫ�ֺ�������ʵ��   ---��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ��ڣ���ʵ�ã�

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


	// 1.ȫ�ֺ�������ʵ��
	// ����friendΪ��Ա��������friendΪȫ�ֺ���
	friend void showInfo(Person<T1, T2>& p)
	{
		cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;
	}

	
};

void test151()
{
	Person<string, int> p("����", 15);
	showInfo(p);
}



int main15()
{
	test151();
	return 0;
}