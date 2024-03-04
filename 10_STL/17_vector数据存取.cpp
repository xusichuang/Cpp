#include<iostream>
using namespace std;
#include<vector>

// vector数据存取

// 函数原型
// at(int index)			// 返回索引index所指向的数据
// operator[]				// 返回索引index所指向的数据
// 注意：[]越界会导致程序崩溃，at越界则会抛出异常
// front()					// 返回容器中第一个数据元素
// back()					// 返回容器中最后一个数据元素


void test171()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	// 利用[]访问数组中的元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	// 利用at方式访问元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	// 获取第一个元素
	cout << "第一个元素:" << v1.front() << endl;

	// 获取最后一个元素
	cout << "最后一个元素：" << v1.back() << endl;
}

int main17()
{
	test171();
	return 0;
}