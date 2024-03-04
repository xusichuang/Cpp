#include<iostream>

using namespace std;

// 堆区的数据由程序员来管理，程序员不释放，则一直存在
// 指针变量所指的地址存在栈区，所指的值存放在堆区
int* func()
{
	// 利用关键字new可以讲数据开辟到堆区
	// 指针本质上也是局部变量放在栈区，指针保存好的数据是放在堆区
	int* p  = new int(10);
	return p;
}

int main03()
{
	// C++中主要利用new在堆区开辟内存
	int* p = func();
	cout << *p << endl;
	return 0;
}