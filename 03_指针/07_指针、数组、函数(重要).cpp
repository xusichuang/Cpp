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
	// 封装一个函数，利用冒泡排序，实现对整形数组的升序排序
	int arr[] = { 9,5,1,4,2,3,7,6,10,8};
	int len = sizeof(arr) / sizeof(arr[0]);
	// 调用冒泡函数
	bubbleSort(arr, len);
	PrintArray(arr, len);
	return 0;
}