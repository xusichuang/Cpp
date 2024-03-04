#include<iostream>
using namespace std;
#include<deque>

// deque容器基本概念

// 功能：双端数组（双端队列），可以对头端进行插曲和删除操作

// deque和vector区别：
// 1.vector对于头部的插入删除效率低，数据量越大，效率越低
// 2.deque相对而言，对头部插入删除速度比vector块
// 3.vector访问元素时的速度会比deque快


// deque容器的迭代器也是支持随机访问的
// deque构造函数
// 函数原型：	
//		deque<T> deqT					// 默认构造形式
//		deque(begin,end)				// 构造函数将[begin,end)区间中的元素拷贝给本身
//		deque(n,elem)					// 构造函数将n个elem拷贝给本身
//		deque(const deque& deq)			// 拷贝构造函数



void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it=100 容器中的数据不可以修改
		cout << *it << " ";
	}
	cout << endl;
}


void test201()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);


	deque<int>d2(d1.begin(), d1.end());
	printDeque(d2);

	deque<int>d3(10, 100);
	printDeque(d3);


	deque<int> d4(d3);
	printDeque(d4);
}

int main20()
{
	test201();
	return 0;
}