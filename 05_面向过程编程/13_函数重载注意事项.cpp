#include<iostream>
using namespace std;


// �������ص�ע������
// 1.������Ϊ���ص�����
void fun(int& a)
{
	cout << "����func�ĵ���:int& a" << endl;
}

void fun(const int& a)
{
	cout << "����func�ĵ���:const int& a" << endl;
}

// 2.������������Ĭ�ϲ���
void fun2(int a,int b=10)
{
	cout << "����fun2�ĵ���:int a" << endl;
}

void fun2(int a)
{
	cout << "����fun2�ĵ���:int a" << endl;
}

int main13()
{
	fun(10);
	int a = 10;
	fun(a);

	// ��������Ĭ�ϲ�������������֪��������һ��
	// д�������ؾ�����Ҫ��Ĭ�ϲ���
	// fun2(2);
	return 0;
}