#include<iostream>
using namespace std;
#include<vector>

// 给vector容器进行赋值

// 函数原型：
//		vector& operator=(const vector& vec);		// 重载等号操作符
//		assign(begin,end)							// 将[begin,end)区间中的数据拷贝赋值给本身
//		assign(n,element)							// 将n给element数据拷贝赋值给本身


void printVector2(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}

void test141()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector2(v1);

	// 赋值 operator
	vector<int> v2;
	v2 = v1;
	printVector2(v2);

	// assign
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector2(v3);

	// n个elem
	vector<int>v4;
	v4.assign(10, 100);
	printVector2(v4);
}

int main14()
{
	test141();
	return 0;
}