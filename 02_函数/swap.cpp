// ""表示自定义头文件
#include "swap.h"


// 函数的定义
void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}