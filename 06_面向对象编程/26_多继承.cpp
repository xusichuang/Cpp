#include<iostream>
using namespace std;

// C++����һ����̳ж����
// �﷨��class ���������̳з�ʽ��public,protected,private) ������1���̳з�ʽ��public,protected,private)������2......�̳з�ʽ��public,protected,private)������n

// ��̳����ѻ�������������ͬ����Ա���֣�����Ҫ��������������

//ע�⣺�������̳�
// ����1
class Base1
{
public:
	int m_A;
	int m_F=700;
	Base1()
	{
		m_A = 100;

	}
};
// ����2
class Base2
{
public:
	int m_B;
	int m_F=820;
	Base2()
	{
		m_B = 200;
		
	}
private:
	// �ᱻ�̳У����ǲ��ܱ����ʣ�����
	int m_Z = 0;
};

class Son :public Base1,public Base2
{
public:
	int m_C;
	int m_D;
	Son()
	{
		m_C = 300;
		m_D = 400;
	}
};

void test261()
{
	Son s;
	cout << "s  sizeof=" << sizeof(s) << endl;
	// �������г���ͬ����Ա����Ҫ������������
	cout << "Base1 �µ�m_F = " << s.Base1::m_F << endl;
	cout << "Base2 �µ�m_F = " << s.Base2::m_F << endl;

}

int main26()
{
	test261();
	return 0;
}