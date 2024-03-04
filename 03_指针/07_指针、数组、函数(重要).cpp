#include<iostream>
using namespace std;


void bubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j<len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void PrintArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
	return;
}

int main()
{
	// ��װһ������������ð������ʵ�ֶ������������������
	int arr[] = { 9,5,1,4,2,3,7,6,10,8};
	int len = sizeof(arr) / sizeof(arr[0]);
	// ����ð�ݺ���
	bubbleSort(arr, len);
	PrintArray(arr, len);
	return 0;
}