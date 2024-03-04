#include<iostream>
using namespace std;
#include<set>

// set����Ĭ���������Ϊ��С����������θı��������

// ��Ҫ�����㣺
// ���÷ź���������ı�������򣡣���


// �º���
class MyCompare
{
public:
	// ��һ��������ʾ���صķ��ţ��ڶ���������ʾ�����б�    �������Ҫ��const������
	bool operator()(int v1,int v2) const
	{
		return v1 > v2;
	}
};

// set���������������
void test421()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(5);
	s1.insert(30);
	s1.insert(40);

	for (set<int>::const_iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	// ָ��������򣨴Ӵ�С��
	set<int, MyCompare> s2;
	s2.insert(10);
	s2.insert(20);
	s2.insert(5);
	s2.insert(30);
	s2.insert(40);
	for (set<int,MyCompare>::const_iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

class Person
{
public:
	string m_Name;
	int m_Age;
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
};


//�Զ����������ͱ���ָ��������򣬷���ᱨ��
class ComparePerson
{
public:
	bool operator()(const Person &p1,const Person &p2) const
	{
		return p1.m_Age > p2.m_Age;
	}
};


// set����Զ�����������
void test422()
{
	Person p1("����", 52);
	Person p2("����", 45);
	Person p3("�", 23);

	set<Person,ComparePerson> s;
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	for (set<Person,ComparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������" << it->m_Name << "  ���䣺" << it->m_Age << endl;
	}
}




int main42()
{
	test421();
	test422();
	return 0;
}