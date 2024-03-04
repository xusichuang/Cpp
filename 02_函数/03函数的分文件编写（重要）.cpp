#include<iostream>
using namespace std;
#include"swap.h"

// 函数的分文件编写
// 实现两个数字交换的函数

/*// 函数的声明
void swap(int a, int b);

// 函数的定义
void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}*/

// 步骤
// 1.创建.h后缀名的头文件

// 2.创建.cpp后缀名的源文件

// 3.在文件中写函数的声明

// 4.在源文件中写函数的定义

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	return 0;
}