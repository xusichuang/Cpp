#include<iostream>
using namespace std;

// ���õı�������C++�ڲ�ʵ��һ��ָ�볣��������

void func(int& ref)
{
	ref = 100;
}


int main08()
{
	int a = 10;
	// �����Զ�ת��Ϊint * const ref = &a��ָ�볣���ǵ�ָ��ָ�򲻿��޸�
	int& ref = a;
	// �ڲ�����ref�����ã��Զ�������ת��Ϊ *ref = 20
	ref = 20;
	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;

	func(a);
	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;

	return 0;
}