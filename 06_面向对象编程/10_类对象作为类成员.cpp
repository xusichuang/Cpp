#include<iostream>

using namespace std;

// ���еĳ�Ա��������һ����Ķ��󣬳Ƹó�ԱΪ�����Ա
// class A{}
// class B
// {
//		A a;
// }


class Phone
{
public:
	string m_Pname;
	Phone(string pname)
	{
		m_Pname = pname;
		cout << "Person�����ĵ���" << endl;
	}
};

class Person
{
public:
	// ����
	string m_Name;
	// �ֻ�
	Phone m_Phone;

	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person�����ĵ���" << endl;
	}
};
// �������������Ϊ�����Աʱ���ȹ�������󣨳�Ա�����ٹ�������

void test0111()
{
	Person p("����", "iphone");
	cout << p.m_Name << endl;
	cout << p.m_Phone.m_Pname << endl;
}

int main10()
{
	test0111();

	return 0;
}