#include<iostream>
using namespace std;

int main05()
{
	// ����ָ����������е�Ԫ��

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// ��������ָ��
	int* p = arr;
	cout << "����ָ����������һ��Ԫ��:" << *p << endl;
	// ��ָ�����ƫ��һ��λ��
	p++;
	cout << "����ָ���������ڶ���Ԫ��:" << *p << endl;
	int* p2 = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << *p2 << endl;
		p2++;
	}
	return 0;
}