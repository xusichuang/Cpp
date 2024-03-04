#include<iostream>
using namespace std;

// 1.默认参数要放在参数的最后面
int func(int a, int b=20, int c=30)
{
	return a + b + c;
}
// 2.如果函数声明有默认参数，函数实现就不能有默认参数
int func2(int a = 10, int b = 20);

int func2(int a, int b)
{
	return a + b;
}

int main10()
{
	int c = func(10, 10);
	cout << "c=" << c << endl;
	int d = func2();
	cout << "d=" << d << endl;
	return 0;
}