#include<iostream>
using namespace std;

int main29()
{
	// �﷨�����ʽ1 �� ���ʽ2�����ʽ3
	// ������ʽ1Ϊ�棬�򷵻ر��ʽ2�Ľ��
	// ������ʽ1Ϊ�٣��򷵻ر��ʽ3�Ľ��
	int a = 10;
	int b = 20;
	int c;
	c = (a > b ? a : b);
	cout << "c=" << c << endl;

	// ��C++����Ŀ��������ص��Ǳ���������Լ�����ֵ
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}