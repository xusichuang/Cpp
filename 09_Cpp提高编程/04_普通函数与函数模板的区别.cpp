#include<iostream>
using namespace std;


// ��ͨ�����뺯��ģ������
// 1.��ͨ��������ʱ���Է����Զ�����ת��(��ʽ����ת��)
// 2.����ģ�����ʱ����������Զ������Ƶ������ᷢ����ʽ����ת��
// 3.�������  ��ʾָ������  �ķ��������Է���  ��ʽ����ת��

// ��ͨ����
int myAdd01(int a, int b)
{
	return a + b;
}

// ����ģ��
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test041()
{
	// 1.��ʽת��
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd01(a, b) << endl;
	// ���Զ���c��ASCII��ֵת��int
	cout << myAdd01(a, c) << endl;

	// 2.�Զ������Ƶ�
	cout << myAdd02(a, b) << endl;
	// ��������֪����ת��char����int
	// cout << myAdd02(a, c) << endl;

	// 3.��ʾָ������
	cout << myAdd02<int>(a, c) << endl;
}



int main04()
{
	test041();
	return 0;
}