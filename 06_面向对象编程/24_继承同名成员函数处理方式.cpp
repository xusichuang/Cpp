#include<iostream>
using namespace std;


// �̳���ͬ����Ա����
// ͬ�����������Ḳ�Ǹ���ͬ����Ա���Ի���������

class Base
{
public:
	int m_A;
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base�µ�func��������" << endl;
	}
};


class Son :public Base
{
public:
	int m_A;
	Son()
	{
		m_A = 1200;
	}

	void func()
	{
		cout << "Son�µ�func��������" << endl;
	}
};

// ͬ����Ա����
void test241()
{
	Son s1;
	
	cout << "Son �µ�m_A=" << s1.m_A << endl;
	// ���ͨ��������� ���ʵ�������ͬ����Ա������Ҫ��������!!!
	cout << "Base�µ�m_A=" << s1.Base::m_A << endl;
}

// ͬ����Ա����
void test242()
{
	Son s2;
	s2.func();
	s2.Base::func();
}

int main24()
{
	test241();
	test242();
	return 0;
}