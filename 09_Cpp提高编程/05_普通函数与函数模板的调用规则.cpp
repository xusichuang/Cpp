#include<iostream>
using namespace std;


// ��ͨ�����뺯��ģ��ĵ��ù���
// 1.�������ģ�����ͨ����������ʵ�֣������ȵ�����ͨ����
// 2.����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
// 3.����ģ��Ҳ���Է�������
// 4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��

void myPrint(int a, int b)
{
	cout << "������ͨ����" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "����ģ�庯��" << endl;
}

template<class T>
void myPrint(T a, T b,T c)
{
	cout << "�������ص�ģ�庯��" << endl;
}


void test051()
{
	int a = 10;
	int b = 20;
	// 1.���ȵ�����ͨ����
	myPrint(a, b);

	// 2.ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
	myPrint<>(a, b);

	// 3.����ģ��Ҳ���Է�������
	myPrint(a, b, 100);

	// 4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';

	// ���ȵ��ú���ģ��
	myPrint(c1, c2);


}


int main05()
{
	test051();
	return 0;
}