#include<iostream>
using namespace std;
#include<deque>

// deque��ֵ(��vector����һ��)

void printDeque2(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it=100 �����е����ݲ������޸�
		cout << *it << " ";
	}
	cout << endl;
}

void test211()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque2(d1);

	// operator= ��ֵ
	deque<int> d2;
	d2 = d1;
	printDeque2(d2);

	// assign��ֵ
}


int main21()
{
	test211();
	return 0;
}