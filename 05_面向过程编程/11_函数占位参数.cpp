#include<iostream>
using namespace std;

// 函数占位参数，占位参数也可以有默认参数
// 目前阶段占位参数用不到，后面课程中会用到
void func(int a, int)
{
	cout << "this is a func" << endl;
}

// 占位参数还可以有默认参数
void func2(int a, int =10)
{
	cout << "this is a func" << endl;
}
int main11()
{
	func(10, 10);
	func2(10);
	return 0;
}