#include<iostream>
using namespace std;


// ��̬��Ա�ͷǾ�̬��Ա����ͬ��������ʽһ��
//1.��������ͬ����Ա  ֱ�ӷ��ʼ���
//2.���ʸ���ͬ����Ա  ��Ҫ��������

class Base
{
public:
	// ��̬��Ա����
	// 1.����ʱ�����ڴ�
	// 2.���ж�����һ������
	// 3.���������������ʼ��
	static int m_A;

	static void func()
	{
		cout << "Base�¾�̬��Ա��������" << endl;
	}

};
// �����ʼ��
int Base::m_A = 100;


class Son :public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son�¾�̬��Ա��������" << endl;
	}
};
int Son::m_A = 200;

// ͬ����̬��Ա����
void test251()
{
	Son s;
	// 1.ͨ���������
	cout << "Son ��ͬ����̬��Ա����m_A=" << s.m_A << endl;

	cout << "Base ��ͬ����̬��Ա����m_A=" << s.Base::m_A << endl;
	// 2.ͨ������
	cout << "Son ��ͬ����̬��Ա����m_A=" << Son::m_A << endl;

	cout << "Base ��ͬ����̬��Ա����m_A=" << Son::Base::m_A << endl;

}

// ͬ����̬��Ա����
void test252()
{
	Son s2;
	s2.func();

	s2.Base::func();
}

int main25()
{
	test251();
	test252();
	return 0;
}