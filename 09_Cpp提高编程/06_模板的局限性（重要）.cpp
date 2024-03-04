#include<iostream>
using namespace std;

// ģ���ͨ���Բ������ܵ�
template<class T>
void f(T a, T b)
{
	a = b;
}
// ��������������ߵĸ�ֵ��������������a��b��һ�����飬���޷�ʵ��



template<class T>
bool myCompare(T& a, T& b)
{
	if(a > b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
// �����������У����T���������ʹ��������Person�������Զ����������ͣ�Ҳ�޷���������


// Ϊ�˽���������⣬�ṩģ������أ�����Ϊ��Щ�ض��������ṩ���廯��ģ��
class Person
{
public:
	// ����
	string m_name;
	// ����
	int age;

	Person(string name, int age)
	{
		this->m_name = name;
		this->age = age;
	}
};


// ���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ��ã�����
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.age > p2.age)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void test061()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a>b" << endl;
	}
	else
	{
		cout << "a<=b" << endl;
	}
}

void test062()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1>p2" << endl;
	}
	else
	{
		cout << "p1<=p2" << endl;
	}
}



int main06()
{
	test061();
	test062();
	return 0;
}