#include<iostream>
using namespace std;
#include<list>
#include<string>


// ��Person�Զ����������ͽ�������Person�����������������䡢���
// ������򣺰�����������������������ͬ������߽��н���

class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	// string���ͱ������ǰ������޷���ȡ���ݣ���Ȩ�����ƣ�����(VS����bug�ˣ�
	string m_Name;
	int m_Age;
	int m_Height;

	


};

// ������򣡣���
bool ComparePerson(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		// ������ͬ������߽���
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}

}

void test352()
{
	list<Person> L;

	// ׼������
	Person p1("����", 15, 160);
	Person p2("����", 29, 200);
	Person p3("����", 30, 300);
	Person p4("֣�", 15, 166);

	// ��������
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);

	cout << "����ǰ��" << endl;
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << (*it).m_Name << "  ���䣺" << it->m_Age << "  ��ߣ�" << it->m_Height << endl;
	}
	cout << "-----------------------------" << endl;
	cout << "�����" << endl;
	L.sort(ComparePerson);
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << (*it).m_Name << "  ���䣺" << it->m_Age << "  ��ߣ�" << it->m_Height << endl;
	}
	

	
}


int main35()
{
	test352();
	return 0;
}
