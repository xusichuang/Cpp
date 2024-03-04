#include<iostream>
using namespace std;

int main03()
{
	// 空指针：指针变量指向内存编号为0的空间
	// 0~255之间的内存编号是系统占用的
	// 用途：初始化指针变量
	int* p = nullptr;
	// 注意：空指针指向的内存是不可以访问的
	// *p = 10会报错


	// 野指针：指针变量指向非法的内存空间
	// 地址没有申请
	int* p1 = (int*)0X1100;
	cout << *p << endl;
	return 0;
}