#include<iostream>
using namespace std;

// ��������
// ���ã�������������ͬ����߸�����

// ������������������
// 1.ͬһ����������
// 2.��������ͬ
// 3.�����������Ͳ�ͬ ���� ������ͬ ����˳��ͬ

// ע�⣺�����ķ���ֵ��������Ϊ�������ص�����!!!

// func��ȫ��������
void func(double val)
{
	cout << "func�ĵ���  "<< "val=" << val << endl;
}

void func(int val=10)
{
	cout << "func�ĵ���  " << "val=" << val << endl;
}

void func(int val1, double val2)
{
	cout << "func�ĵ���  "<< endl;
	cout << "val1=" << val1 << endl;
	cout << "val2=" << val2 << endl;
}

void func(double val1, int val2)
{
	cout << "func�ĵ���  " << endl;
	cout << "val1=" << val1 << endl;
	cout << "val2=" << val2 << endl;
}


// ע�⣺�����ķ���ֵ��������Ϊ�������ص�����!!!
/*int func(double val1, int val2)
{
	cout << "func�ĵ���  " << endl;
	cout << "val1=" << val1 << endl;
	cout << "val2=" << val2 << endl;
	return val1;
}*/

int main12()
{
	
	func(10);
	func(10.1);
	func(10, 20.3);
	func(10.3, 20);
	return 0;
}