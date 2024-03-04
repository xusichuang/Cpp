#include<iostream>
using namespace std;
#include<deque>

// deque赋值(与vector基本一致)

void printDeque2(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it=100 容器中的数据不可以修改
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

	// operator= 赋值
	deque<int> d2;
	d2 = d1;
	printDeque2(d2);

	// assign赋值
}


int main21()
{
	test211();
	return 0;
}