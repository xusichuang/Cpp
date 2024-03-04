#include<iostream>
using namespace std;
#include<deque>

// deque插入和删除


// 函数原型：
// 两端插入操作：
//		push_back(elem)			//在容器尾部添加一个数据
//		push_front(elem)		//在容器头部插入一个数据
//		pop_back()				//删除容器最后一个数据
//		pop_front()				//删除容器第一个数据

// 指定位置操作
//		insert(pos,elem)		//在pos位置插入一个elem元素的拷贝，返回新数据的位置
//		insert(pos,n,elem)		//在pos位置插入n个elem数据，无返回值
//		insert(pos,begin,end)	//在pos位置插入[begin,end)区间的数据，无返回值！！！

//		clear()													//删除容器中所有元素
//		erase(const_iterator pos)								//删除迭代器指向的元素pos，返回下一个数据的位置
//		erase(const_iterator begin,const_iterator end)			//删除迭代器从begin到end之间的元素，返回下一个数据的位置

void printDeque4(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it=100 容器中的数据不可以修改
		cout << *it << " ";
	}
	cout << endl;
}

void test231()
{
	cout << "尾插后的数据：" << endl;
	// 尾插
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque4(d1);

	cout << "头插后的数据：" << endl;
	// 头插
	d1.push_front(100);
	d1.push_front(200);
	printDeque4(d1);

	cout << "尾删后的数据：" << endl;
	// 尾删
	d1.pop_back();
	printDeque4(d1);

	cout << "头删后的数据：" << endl;
	// 头删
	d1.pop_front();
	printDeque4(d1);

}


void test232()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque4(d1);


	cout << "插入数据后：" << endl;
	// insert插入
	d1.insert(d1.begin(), 1000);
	printDeque4(d1);

	d1.insert(d1.begin(), 2, 500000);
	printDeque4(d1);


	// 按区间插入！！！
	deque<int> d2;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque4(d2);
	cout << "插入区间之后：" << endl;
	d2.insert(d2.begin(), d1.begin(), d1.end());
	printDeque4(d2);
}

void test233()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque4(d1);

	// 删除！！！
	cout << "删除后：" << endl;
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	printDeque4(d1);

	// 按区间方式删除
	d1.erase(d1.begin(), d1.begin() + 2);
	printDeque4(d1);
	
	cout << "清空之后：" << endl;
	d1.clear();
	printDeque4(d1);
}

int main23()
{
	test231();

	test232();
	
	test233();
	return 0;
}