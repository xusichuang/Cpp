#include<iostream>
using namespace std;

// ��̬��Ա����
// 1.���ж�����ͬһ������
// 2.�ڱ���׶η����ڴ�
// 3.���������������ʼ��


//��̬��Ա����
// 1.���ж�����ͬһ������
// 2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����


// ��̬��Ա����
class Person
{
public:

	// ���ж��󶼹���ͬһ������
	static int m_A;


// ��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static int m_B;

};
int Person::m_A = 100;
int Person::m_B = 200;
void test001()
{
	Person p;
	cout << p.m_A << endl;

	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;
}

void test002()
{
	// ��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
	// ��˾�̬��Ա���������ַ��ʷ�ʽ

	// 1.ͨ��������з���
	Person p;
	cout << p.m_A << endl;

	// 2.ͨ���������з���
	cout << Person::m_A << endl;

	// cout << Person::m_B << endl;    �޷�����
	
}

int main11()
{
	
	// test001();
	test002();
	return 0;
}