#include<iostream>

using namespace std;

int main47()
{
	// ��ά����������;

	// 1.���Բ鿴ռ���ڴ�ռ��С
	int arr[2][3] = 
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "��ά����ռ���ڴ�ռ��С��" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ���ڴ�ռ��С��" << sizeof(arr[0]) << endl;
	cout << "��ά����ÿ������Ԫ��ռ���ڴ�ռ��С��" << sizeof(arr[0][0]) << endl;

	cout << "��ά����������" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά����������" << sizeof(arr[0]) / sizeof(arr[0][0]);

	// 2.���Բ鿴��ά������׵�ַ
	cout << "��ά������׵�ַΪ��" << (int)arr << endl;
	cout << "��ά�����һ�е��׵�ַ" << (int)arr[0] << endl;
	cout << "��ά����ڶ��е��׵�ַ" << (int)arr[1] << endl;
	// ���ʾ���Ԫ�صĵ�ַҪ��&����
	cout << "��ά����Ԫ�ص�ַ��" << (int)&arr[0][0] << endl;
	return 0;
}