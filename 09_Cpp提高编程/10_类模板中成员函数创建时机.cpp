
#include<iostream>
using namespace std;
// ��ģ���г�Ա��������ʱ��
// 1.��ͨ���еĳ�Ա����һ��ʼ�ʹ���
// 2.��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���


class Person1
{
public:
	void showPerson1()
	{
		cout << "Peron1  Show" << endl;
	}
};


class Person2
{
public:
	void showPerson2()
	{
		cout << "Peron2  Show" << endl;
	}
};
template<class T>
class ABCD
{
public:
	T object;

	// ��ģ���еĳ�Ա����
	void func1()
	{
		// 2.��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���
		// ��ʱ����֪��object���������ͣ����ᱻ��������
		object.showPerson1();
	}
	void func2()
	{
		object.showPerson2();
	}
};


void test101()
{
	ABCD<Person1> m;
	m.func1();

	ABCD<Person2> n;
	n.func2();
}

int main10()
{
	test101();
	return 0;
}