#include<iostream>
using namespace std;

void swap1(int a, int b);
void swap2(int* p1, int* p2);
void swap3(int& a, int& b);
int main06()
{
	int m = 10;
	int n = 20;
	// 1.值的传递
	swap1(m, n);
	cout << "m=" << m << ",n=" << n << endl;

	// 2.地址的传递
	swap2(&m, &n);
	cout << "m=" << m << ",n=" << n << endl;

	int k = 10;
	int l = 20;
	swap3(k, l);
	cout << "m=" << m << ",n=" << n << endl;
	return 0;
}

void swap1(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void swap2(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void swap3(int& a, int& b)
{
	// 与swap2等价
	int tmp = a;
	a = b;
	b = tmp;
}