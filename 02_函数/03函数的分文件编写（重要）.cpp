#include<iostream>
using namespace std;
#include"swap.h"

// �����ķ��ļ���д
// ʵ���������ֽ����ĺ���

/*// ����������
void swap(int a, int b);

// �����Ķ���
void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}*/

// ����
// 1.����.h��׺����ͷ�ļ�

// 2.����.cpp��׺����Դ�ļ�

// 3.���ļ���д����������

// 4.��Դ�ļ���д�����Ķ���

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	return 0;
}