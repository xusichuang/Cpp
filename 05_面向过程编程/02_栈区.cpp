#include<iostream>
using namespace std;

// ջ����ע�������Ҫ���ؾֲ������ĵ�ַ������
// ջ���������ɱ����������ٺ��ͷ�



int* func(int b) //�β�Ҳ�����ջ��
{
	// �ֲ����������ջ����ջ���������ں���ִ�����Զ��ͷ�
	int a = 10;

	b = 100;
	return &a;
}




int main02()
{
	int* p = func(1);
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	return 0;
}