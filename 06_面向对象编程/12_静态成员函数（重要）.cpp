#include<iostream>
using namespace std;
// ��̬��Ա����
// 1.���ж�����ͬһ������
// 2.�ڱ���׶η����ڴ�
// 3.���������������ʼ��


//��̬��Ա����
// 1.���ж�����ͬһ������
// 2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person
{
public:
	// ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	// ��̬��Ա����
	static void func()
	{
		cout << "static void func�ĵ���" << endl;
		m_A1 = 100;
		// m_B = 2000; �ᱨ��
		cout << m_A1 << endl;
	}

	
	// ��̬��Ա���� m_A
	static int m_A1;

	// ��ͨ��Ա����
	int m_B;



	// ��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func�ĵ���" << endl;
		m_A1 = 100;
		// m_B = 2000; �ᱨ��
	}
};
// �����ʼ��
int Person::m_A1 = 200;


void test012()
{
	// ���ַ��ʷ�ʽ
	// 1.ͨ���������
	Person p;
	p.func();

	// 2.ͨ����������
	Person::func();


	//Person::func2();      ������ʲ���˽�о�̬��Ա����
}

int main12()
{
	test012();
	return 0;
}