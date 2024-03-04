
#include<iostream>
using namespace std;

int main43()
{
	/*
	一维数组名称的用途
	1.可以统计整个数组在内存中的长度
	2.可以获取数组在内存中的首地址
	*/
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占用的内存大小：" << sizeof(arr) << endl;
	cout << "数组中每个元素占用内存大小:" << sizeof(arr[0]) << endl;

	cout << "数组大小:" << sizeof(arr)/sizeof(arr[0]) << endl;
	cout << "数组大小:" << sizeof(arr) / sizeof(int) << endl;

	cout << "数组首地址:" << arr << endl;
	// 16进制转成10进制
	cout << "数组首地址:" << (int)arr << endl;
	// 访问具体元素的地址要用&符号
	cout << "数组第一个元素的地址为：" << &arr[0] << endl;

	return 0;
}