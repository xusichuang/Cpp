#include<iostream>
using namespace std;


// ��������أ������е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������


// ʵ�ּӺ����������

class Person20
{
public:
	int m_A;
	int m_B;
	// 1.ͨ����Ա��������+��
	/*Person20 operator+(Person20& p)
	{
		Person20 tmp;
		tmp.m_A = this->m_A + p.m_A;
		tmp.m_B = this->m_B + p.m_B;
		// ���뷵��һ��ֵ������ᱨ��
		return tmp;
	}*/
};

// 2.ȫ�ֺ�������+��
Person20 operator+(Person20& p1, Person20& p2)
{
	Person20 tmp;
	tmp.m_A = p1.m_A + p2.m_A;
	tmp.m_B = p1.m_B + p2.m_B;
	return tmp;
}

// �������صİ汾
Person20 operator+(Person20& p1, int num)
{
	Person20 tmp;
	tmp.m_A = p1.m_A + num;
	tmp.m_B = p1.m_B + num;
	return tmp;
}

void test021()
{
	Person20 p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person20 p2;
	p2.m_A = 20;
	p2.m_B = 30;
	// ���붨���Ա����operator+������ᱨ��
	// ָ��ʵ��operator��Ա������Person p3 = p1 + &p2
	Person20 p3 = p1 + p2;

	// ��Ա�����ı��ʵ���
	// Person20 p3 = p1.operator+(p2);

	// ȫ�ֺ����ı��ʵ���
	Person20 p4 = operator+(p1, p2);
	cout << p4.m_A << endl;
	cout << p4.m_B << endl;

	Person20 p5 = p1 + 100;
	cout << p5.m_A << endl;
	cout << p5.m_B << endl;
}


// �ܽ᣺
// 1.�������õ��������͵ı��ʽ��������ǲ����ܸı��
// 2.��Ҫ�������������


int main20()
{
	test021();
	return 0;
}