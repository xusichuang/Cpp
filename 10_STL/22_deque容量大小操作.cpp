#include<iostream>
using namespace std;
#include<deque>


// 对deque容器的大小进行操作

// 函数原型：
//		deque.empty()
//		deque.size()
//		deque.resize(num)
//		deque.resize(num,elem);

void printDeque3(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it=100 容器中的数据不可以修改
		cout << *it << " ";
	}
	cout << endl;
}

void test221()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque3(d1);

	if (d1.empty())
	{
		cout << "deqiue为空" << endl;
	}
	else
	{
		cout << "deqiue不为空" << endl;
	}

	// deque容器没有容量概念！！！

	d1.resize(15);
	printDeque3(d1);


	d1.resize(20, 100);
	printDeque3(d1);

}

int main22()
{
	test221();
	return 0;
}