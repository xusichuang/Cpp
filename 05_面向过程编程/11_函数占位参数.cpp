#include<iostream>
using namespace std;

// ����ռλ������ռλ����Ҳ������Ĭ�ϲ���
// Ŀǰ�׶�ռλ�����ò���������γ��л��õ�
void func(int a, int)
{
	cout << "this is a func" << endl;
}

// ռλ������������Ĭ�ϲ���
void func2(int a, int =10)
{
	cout << "this is a func" << endl;
}
int main11()
{
	func(10, 10);
	func2(10);
	return 0;
}