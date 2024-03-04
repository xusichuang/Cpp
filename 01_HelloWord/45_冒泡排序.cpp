#include<iostream>

using namespace std;

int main45()
{
	int arr[] = { 4,2,8,0,5,7,1,3,9 };
	int _size = sizeof(arr) / sizeof(arr[0]);
	int tmp;

	// 排序的总轮数 = 数组元素个数-1
	
	for (int i = 0; i < _size-1; i++)
	{
		// 每轮对比的次数：数组元素-排序轮数-1
		for (int j = 0; j < _size-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for (int k = 0; k < _size; k++)
	{
		cout << arr[k] << " ";
	}



	return 0;
}