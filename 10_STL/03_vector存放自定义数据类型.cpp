#include<iostream>
using namespace std;

#include<vector>

class Person
{
public:
	string m_Name;
	int m_Age;

	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
};
// ����Զ�������
void test031()
{
	vector<Person> v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	// ���������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	// ���������е�����
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << (*it).m_Name << "���䣺" << (*it).m_Age << endl;
		// itΪָ��
		cout << "������" << it->m_Name << "���䣺" << it->m_Age << endl;
	}
}

// ����Զ�����������   ָ��
void test032()
{
	// ע��*
	vector<Person*> v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	// ���������������   ע��&
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	// itΪָ��ĵ�ַ
	// *itΪָ��
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << (*it)->m_Name << "���䣺" << (*it)->m_Age << endl;
	}
}

int main03()
{
	test031();
	cout << "-------------------------------------------------------------" << endl;
	test032();
	return 0;
}