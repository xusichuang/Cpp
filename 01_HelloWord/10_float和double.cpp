#include<iostream>
using namespace std;

int main10()
{
	// 1.������   float
	// 2.˫����   double
	// 
	// ������Ĭ�Ͻ�3.14��Ϊ˫���ȣ���ת�ɵ����ȣ������һ��ת��,3.14+f���ý���ת��
	float f1 = 3.14f;
	cout << "f1=" << f1 << endl;

	float f2 = 3.1415926;
	cout << "f2=" << f2 << endl;

	// Ĭ������»���ʾ6λ��Ч����
	double f3 = 3.1415926;
	cout << "f3=" << f3 << endl;

	// ͳ��float��doubleռ�õ��ڴ��С
	cout << "floatռ�õ��ڴ��С" << sizeof(float) << endl;
	cout << "doubleռ�õ��ڴ��С" << sizeof(double) << endl;

	// ��ѧ������
	float f4 = 3e2;  // 3*10^2
	cout << "f4=" << f4 << endl;
	return 0;
}