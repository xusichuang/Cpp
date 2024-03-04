#include<iostream>

using namespace std;
// 函数定义前，告诉编译器有这个函数：函数的声明
// 函数可以声明多次，但是只能定义一次


// 提前告诉编译器函数的存在 
int max(int a, int b);

int main02()
{
	int a = 10;
	int b = 20;
	int c = max(a, b);
	cout << "c=" << c << endl;
	return 0;
}


// 定义函数
int max(int a, int b)
{
	return a > b ? a : b;
}