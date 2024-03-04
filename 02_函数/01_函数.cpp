#include<iostream>

using namespace std;

int add(int num1 = 10, int num2 = 20)
{
	int sum = num1 + num2;
	return sum;
}

void swap(int& num1, int& num2)
{
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
	return;
}
int main48()
{
	int c = add(1, 2);
	cout << "c=" << c << endl;
	int a1 = 10;
	int a2 = 20;
	swap(a1, a2);
	cout << "a1=" << a1 << " " << "a2=" << a2 << endl;
	return 0;
}
