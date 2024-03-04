#include<iostream>
using namespace std;

int main44()
{
	// Êı×éµ¹ÖÃ
	int arr[] = { 1,2,3,4,5,6,7 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;

	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		
		start++;
		end--;
	}
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}