#include<iostream>

using namespace std;
// �̳��﷨��
// class ������: �̳з�ʽ ������
// �̳з�ʽ�����м̳С������̳С�˽�м̳�

// ��ͼƬ���


class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
// �����̳�
class Son1 :public Base
{
public:
	void func()
	{
		// �����еĹ���Ȩ�޳�Ա �� ��������Ȼ�ǹ���Ȩ��
		m_A = 10;
		// �����еı���Ȩ�޳�Ա �� ��������Ȼ�Ǳ���Ȩ��
		m_B = 20;  //����Ȩ��������ʲ���

		// m_C = 30  �����е�˽��Ȩ�޳�Ա�����ּ̳з�ʽ�������Է��ʣ�����
	}
	void p()
	{
		cout << m_B << endl;
	}

public:
	int m_D;
};


// �����̳�
class Son2 :protected Base
{
public:
	void func()
	{
		// �����еı���Ȩ�޳�Ա �� �����б�ɱ���Ȩ�ޣ�����
		m_A = 100;
		m_B = 200;

		// m_C = 30  �����е�˽��Ȩ�޳�Ա�����ּ̳з�ʽ�������Է��ʣ�����
	}

	
};

// ˽�м̳�
class Son3 :private Base
{
	void func()
	{
		// �����еı���Ȩ�޳�Ա �� �����б��˽��Ȩ�ޣ�����
		m_A = 1000;
		m_B = 2000;
	}
};

void test231()
{
	Son1 son1;
	son1.func();
	cout << son1.m_A << endl;
	// son1.m_B ��ɱ���Ȩ�ޣ�������ʲ�����ֻ�������ڷ���
	son1.p();
}

int main23()
{
	test231();
	return 0;
}