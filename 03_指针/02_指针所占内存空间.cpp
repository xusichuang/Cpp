#include<iostream>
using namespace std;

int main02()
{
	int a = 10;
	int* p = &a;
	// ��32λ����ϵͳ�£�ָ����ռ4���ֽڿռ��С������ʲô��������
	// ��64λ����ϵͳ�£�ָ����ռ8���ֽڿռ��С������ʲô��������
	cout << "intָ����ռ��С" << sizeof(p) << endl;
	cout << "floatָ����ռ��С" << sizeof(float *) << endl;
	cout << "floatָ����ռ��С" << sizeof(double *) << endl;
	return 0;
}