#include<iostream>
using namespace std;

int main04()
{
	int a = 10;
	int b = 10;
	// ����ָ��const int* p
	// �ص㣺ָ���ָ��ָ������޸ģ�����ָ��ָ���ֵ�����Ը���
	const int* p = &a;
	// *p = 20  ����
	// p = &b   ��ȷ

	// ָ�볣��int * const p
	// �ص㣺ָ���ָ�򲻿��Ըã�ָ��ָ���ֵ���Ը�
	int* const p1 = &a;
	// *p = 20 ��ȷ
	// p = &b  ����

	// const������ָ�룬�����γ���
	// �ص㣺ָ���ָ��ָ��ָ���ֵ�������޸�
	const int* const p3 = &a;

	return 0;
}