#include<iostream>
using namespace std;
#include<deque>

// deque排序

#include<algorithm>

// 算法：
// sort(iterator begin,iterator end)        对begin和end区间内的元素进行排序


void printDeque5(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it=100 容器中的数据不可以修改
		cout << *it << " ";
	}
	cout << endl;
}

void test251()
{
	deque<int> d;
	d.push_back(120);
	d.push_back(10);
	d.push_back(20);
	d.push_front(15);
	d.push_front(3);
	d.push_front(199);

	printDeque5(d);

	// 排序
	// 对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
	sort(d.begin(), d.end());
	cout << "排序后：" << endl;
	printDeque5(d);
}


int main25()
{
	test251();
	return 0;
}