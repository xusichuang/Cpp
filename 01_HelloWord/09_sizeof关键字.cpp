
#include<iostream>
using namespace std;

int main9()
{
	// ����  short(2���ֽ�)   int(4)   long��4��   long long��8��
	// ��������sizeof�����������ռ���ڴ�Ĵ�С
	// �﷨��sizeof(��������/���ݱ���)

	short num1 = 10;
	cout << "shortռ�õ��ڴ�ռ�Ϊ��" << sizeof(short) << endl;
	cout << "numlռ�õ��ڴ�ռ�Ϊ��" << sizeof(num1) << endl;

	int num2 = 2;
	cout << "intռ�õ��ڴ�ռ�Ϊ��" << sizeof(int) << endl;

	long num3 = 5;
	cout << "longռ�õ��ڴ�ռ�Ϊ��" << sizeof(long) << endl;

	long long num4 = 5;
	cout << "long longռ�õ��ڴ�ռ�Ϊ��" << sizeof(long long) << endl;

	return 0;
}