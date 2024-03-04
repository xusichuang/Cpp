#include<iostream>

using namespace std;

int main47()
{
	// 二维数组名称用途

	// 1.可以查看占用内存空间大小
	int arr[2][3] = 
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组占用内存空间大小：" << sizeof(arr) << endl;
	cout << "二维数组第一行占用内存空间大小：" << sizeof(arr[0]) << endl;
	cout << "二维数组每个数组元素占用内存空间大小：" << sizeof(arr[0][0]) << endl;

	cout << "二维数组行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组列数：" << sizeof(arr[0]) / sizeof(arr[0][0]);

	// 2.可以查看二维数组的首地址
	cout << "二维数组的首地址为：" << (int)arr << endl;
	cout << "二维数组第一行的首地址" << (int)arr[0] << endl;
	cout << "二维数组第二行的首地址" << (int)arr[1] << endl;
	// 访问具体元素的地址要用&符号
	cout << "二维数组元素地址：" << (int)&arr[0][0] << endl;
	return 0;
}