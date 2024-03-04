#include<iostream>
using namespace std;

// C++中利用new操作符在堆区开辟数据
// 1.new的基本语法
int* func01()
{
	// 在堆区创建整型数据
	// new返回的是该数据类型的指针
	int* p = new int(10);
	return p;
}

// 2.在堆区利用new开辟数组
void test01()
{
	// 创建10个整型数据的数组
	int* arr = new int[10];
	// 创建数组要用指针，访问赋值则正常使用arr[i]
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	cout << *arr << endl;
	// 释放堆区数组
	delete[] arr;
}

int main04()
{
	
	

	int* p = func01();
	cout << *p << endl;
	// 堆区开辟的数据，由程序员手动开辟、手动释放，释放利用操作符delete
	// 释放堆区的数据
	delete p;
	// 内存已经被释放，再次访问则会报错
	// cout << *p << endl;
	

	test01();
	return 0;
}