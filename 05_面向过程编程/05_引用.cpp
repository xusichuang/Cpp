#include<iostream>
using namespace std;


int main05()
{
	// ���õ����ã������������
	int a = 10;
	// �﷨���������� &���� = ԭ��
	int& b = a;
	cout <<"a=" << a << endl;
	cout << "b=" << b << endl;
	b = 20;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	a = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	// ����ע������
	// 1.���ñ����ʼ��
	// int& b = a;
	// 2.�����ڳ�ʼ���󣬲����Ըı�
	// int& b = c   �Ѿ���ʼ��Ϊa�������޸�Ϊc


	return 0;
}