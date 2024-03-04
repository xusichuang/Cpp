
#include<iostream>
using namespace std;

int main9()
{
	// 整形  short(2个字节)   int(4)   long（4）   long long（8）
	// 可以利用sizeof求出数据类型占用内存的大小
	// 语法：sizeof(数据类型/数据变量)

	short num1 = 10;
	cout << "short占用的内存空间为：" << sizeof(short) << endl;
	cout << "numl占用的内存空间为：" << sizeof(num1) << endl;

	int num2 = 2;
	cout << "int占用的内存空间为：" << sizeof(int) << endl;

	long num3 = 5;
	cout << "long占用的内存空间为：" << sizeof(long) << endl;

	long long num4 = 5;
	cout << "long long占用的内存空间为：" << sizeof(long long) << endl;

	return 0;
}