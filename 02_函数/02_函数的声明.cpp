#include<iostream>

using namespace std;
// ��������ǰ�����߱��������������������������
// ��������������Σ�����ֻ�ܶ���һ��


// ��ǰ���߱����������Ĵ��� 
int max(int a, int b);

int main02()
{
	int a = 10;
	int b = 20;
	int c = max(a, b);
	cout << "c=" << c << endl;
	return 0;
}


// ���庯��
int max(int a, int b)
{
	return a > b ? a : b;
}