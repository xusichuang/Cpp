#include<iostream>
using namespace std;

const double PI = 3.14;

// ���һ��Բ�࣬��Բ���ܳ�
class Circle
{
	// ����Ȩ��
	// ����Ȩ��
public:

	// ����
	// �뾶
	int m_r;

	// ����
	// ��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};


int main01()
{
	// ʵ��������
	Circle c1;
	// ��Բ��������Խ��и�ֵ
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;
	
	return 0;
}