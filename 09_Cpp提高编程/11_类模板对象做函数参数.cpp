#include<iostream>
using namespace std;

// ѧϰĿ�꣺
// ��ģ��ʵ�������Ķ����������εķ�ʽ

// ���ִ��뷽ʽ
// 1.ָ�����������   ---ֱ����ʾ�������������
// 2.����ģ�廯       ---�������еĲ�����Ϊģ����д���
// 3.������ģ�廯     ---������������� ģ�廯���д���




// ��ģ��
template<class Name_Type, class Age_Type = int>
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


// 1.ָ�����������
void printPerson111(Person<string, int> &p)
{
	p.showInfo();
}
void test111()
{
	Person<string, int> p("����", 12);
	printPerson111(p);
	
}


// 2.����ģ�廯
template<class T1,class T2>
void printPerson112(Person<T1, T2>& p)
{
	p.showInfo();
	// �鿴�������ͣ�����
	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	cout << "T1������Ϊ��" << typeid(T2).name() << endl;
}
void test112()
{
	Person<string, int> p("����", 18);
	printPerson112(p);
}


// 3.������ģ�廯
template<class T>
void printPerson113(T &p)
{
	p.showInfo();
	cout << "T����������Ϊ��" << typeid(T).name() << endl;
}
void test113()
{
	Person<string, int> p("����", 30);
	printPerson113(p);
}


int main11()
{
	test111();
	test112();
	test113();
	return 0;
}