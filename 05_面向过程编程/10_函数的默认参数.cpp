#include<iostream>
using namespace std;

// 1.Ĭ�ϲ���Ҫ���ڲ����������
int func(int a, int b=20, int c=30)
{
	return a + b + c;
}
// 2.�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
int func2(int a = 10, int b = 20);

int func2(int a, int b)
{
	return a + b;
}

int main10()
{
	int c = func(10, 10);
	cout << "c=" << c << endl;
	int d = func2();
	cout << "d=" << d << endl;
	return 0;
}