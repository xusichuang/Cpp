#include<iostream>
using namespace std;

int main05()
{
	// 利用指针访问数组中的元素

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 创建整形指针
	int* p = arr;
	cout << "利用指针访问数组第一个元素:" << *p << endl;
	// 让指针向后偏移一个位置
	p++;
	cout << "利用指针访问数组第二个元素:" << *p << endl;
	int* p2 = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << *p2 << endl;
		p2++;
	}
	return 0;
}