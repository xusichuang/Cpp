#include<iostream>
using namespace std;

// ��������
// ��Ա���������const�����ǳ��������Ϊ������
// �������ڲ������޸ĳ�Ա����
// ��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�


//������
// ��������ǰ��const�Ƹö���Ϊ������
// ������ֻ�ܵ��ó�����


class Person
{
public:
	int m_A;
	mutable int m_B;   //����������ڳ�������Ҳ�����޸����ֵ
	// thisָ��ı�����ָ�볣����ָ���ָ���ǲ������޸ĵ�
	// this  �൱��Person* const this
	
	// ������
	// �ڳ�Ա���������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�������޸�
	void showPerson() const
	{
		// m_A = 200;
		//  this = NULL;   thisָ���Ѿ�ָ��p�����������޸�ָ���ָ��
		m_B = 200l;
	}

	void func()
	{

	}
};

void test0161()
{
	Person p;
	p.showPerson();
}


void test0162()
{
	// �ڶ���ǰ��const����Ϊ������
	const Person p2;
	// p2.m_A = 200;
	// �������ڳ�������Ҳ�����޸�
	p2.m_B = 100;

	// ������ֻ�ܵ��ó�����
	p2.showPerson();
}


int main16()
{
	test0161();
	test0162();
	return 0;
}