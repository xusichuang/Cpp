
#include<iostream>
using namespace std;

int main43()
{
	/*
	һά�������Ƶ���;
	1.����ͳ�������������ڴ��еĳ���
	2.���Ի�ȡ�������ڴ��е��׵�ַ
	*/
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ�õ��ڴ��С��" << sizeof(arr) << endl;
	cout << "������ÿ��Ԫ��ռ���ڴ��С:" << sizeof(arr[0]) << endl;

	cout << "�����С:" << sizeof(arr)/sizeof(arr[0]) << endl;
	cout << "�����С:" << sizeof(arr) / sizeof(int) << endl;

	cout << "�����׵�ַ:" << arr << endl;
	// 16����ת��10����
	cout << "�����׵�ַ:" << (int)arr << endl;
	// ���ʾ���Ԫ�صĵ�ַҪ��&����
	cout << "�����һ��Ԫ�صĵ�ַΪ��" << &arr[0] << endl;

	return 0;
}