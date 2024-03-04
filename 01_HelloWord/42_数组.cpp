#include<iostream>
using namespace std;

int main42()
{
	// 数组中的每个数据元素都是相同的数据类型
	// 数组是由连续的内存位置组成的


	// 一维数组的定义方式
	// 1.数据类型 数组名[数组长度]
	// 2.数据类型 数组名[数组长度] = {值1，值2，...}
	// 3.数据类型 数组名[] = {值1，值2，...}

	int arr[5];


	// 如果后面括号数值少于5，则用0进行填充
	int arr1[5] = {1,2,3,4,5};
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] << endl;
	}


	int arr2[] = { 1,2,5,6,9 };
	for (int j = 0; j < 5; j++)
	{
		cout << arr2[j] << endl;
	}
	return 0;
}