/*
谓词概念
	返回bool类型的仿函数称为谓词
	如果operator()接受一个参数，那么叫做一元谓词
	如果operator()接受两个参数，那么叫做二元谓词


*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


class GreaterFive
{
public:
	bool operator()(int v1)
	{
		return v1 > 5;
	}
};

void test021()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	// 查找容器中  有没有大于5的数字
	// GreaterFiver匿名函数对象
	vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
	if (pos != v.end())
	{
		
		for (; pos != v.end(); pos++)
		{
			cout << *pos << " ";
		}
		cout << endl;
	}
	else
	{
		cout << "未找到大于5的数字" << endl;
	}
	
}

class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void test022()
{
	vector<int> v;
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(10);
	v.push_back(50);

	// 从小排序
	// sort(v.begin(),v.end());

	//使用函数对象  进行从大到小排序
	sort(v.begin(), v.end(), MyCompare());
	cout << "从大到小排序：" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


int main02()
{
	test021();
	test022();
	return 0;
}