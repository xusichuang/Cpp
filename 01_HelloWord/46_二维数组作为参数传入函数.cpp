#include<iostream>
using namespace std;

void p(int arr1[2][3],int rows,int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr1[i][j] << " ";;
		}
		cout << endl;
	}
	return;
}


int main46()
{
	// 1.数据类型 数组名[行数][列数] = { { },{ },{ } }
	int arr1[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	p(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]) / sizeof(arr1[0][0]));
	
	cout << endl;
	// 2.数据类型 数组名数组名[行数][列数] = {数据1，数据2，数据3，数据4}
	int arr2[2][3] = {1,2,3,4,5,6};
	p(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(arr2[0]) / sizeof(arr2[0][0]));

	// 3.数据类型 数据名[ ][列数] = {数据1，数据2，数据3，数据4}
	int arr3[][3] = { 1,2,3,4,5 ,6};
	p(arr3, 2, 3);
	
	return 0;
}