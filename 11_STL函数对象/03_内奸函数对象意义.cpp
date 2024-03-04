/*
概念：
	STL内建了一些函数对象

分类：
	算数仿函数
	关系仿函数
	逻辑仿函数

用法：
	这些仿函数所产生的对象，用法和一般函数完全相同
	使用内建函数对象，需要引入头文件 #include<functional>


算数仿函数
功能：
	实现四则运算
	其中negate是医院运算，其余都是二元运算
仿函数原型：
	template<class T> T plus<T>					// 加法仿函数
	template<class T> T minus<T>				// 减法仿函数
	template<class T> T multiplies<T>			// 乘法仿函数
	template<class T> T divides<T>				// 除法仿函数
	template<class T> T modulus<T>				// 取模仿函数
	template<class T> T negate<T>				// 取反仿函数     10 -> -10
*/

#include<iostream>
#include<functional>
using namespace std;

void test031()
{
	negate<int> n;
	cout << n(50) << endl;
}

void test032()
{
	plus<int> pl;
	cout << pl(10, 20) << endl;;
}

int main03()
{
	test031();
	test032();
	return 0;
}