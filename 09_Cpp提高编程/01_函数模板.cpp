
#include<iostream>
using namespace std;

// C++��һ�ֱ��˼���֮Ϊ�����ͱ�̡�����Ҫ���õļ�������ģ��
// C++�ṩ����ģ����ơ�����ģ�塱�͡���ģ�塱

// ����ģ������ã�
// ����һ��ͨ�õĺ������亯������ֵ���β����Ϳ��Բ������ƶ�����һ��  ���������  ������


// �﷨��
// template<typename T>
// ������������

// template:��������ģ��
// typeame:���������ķ�����һ���������ͣ�������class����
// T:ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д��ĸ



// ������������
void swapINT(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

// �������������ͺ���
void swapdouble(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = tmp;
}

// ����̫�࣬����������
// ����ģ��
template<typename T>    // ����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ�õ���������
void mySwap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}


void test01()
{
	int a = 10;
	int b = 20;

	// ���ú���ģ�彻��
	// ���ַ�ʽʹ�ú���ģ��
	// 1.�Զ������Ƶ�
	mySwap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	// 2.ָ����������  T=int
	mySwap<int>(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}



// ����ģ�����ùؼ���template
// ����ģ�������ʹ�÷�ʽ���Զ������Ƶ�����ʾָ������
// ģ���Ŀ����Ϊ����߸����ԣ������Ͳ�����
int main01()
{
	test01();
	return 0;
}