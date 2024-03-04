#include<iostream>
using namespace std;

int main02()
{
	int a = 10;
	int* p = &a;
	// 在32位操作系统下，指针是占4个字节空间大小，不管什么数据类型
	// 在64位操作系统下，指针是占8个字节空间大小，不管什么数据类型
	cout << "int指针所占大小" << sizeof(p) << endl;
	cout << "float指针所占大小" << sizeof(float *) << endl;
	cout << "float指针所占大小" << sizeof(double *) << endl;
	return 0;
}