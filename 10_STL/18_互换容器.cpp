#include<iostream>
using namespace std;
#include<vector>

//vector互换容器

void printVector5(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

// 1.基本使用
void test181()
{
	cout << "交换前：" << endl;
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector5(v1);


	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v2.push_back(10-i);
	}
	printVector5(v2);


	cout << "交换后：" << endl;
	v1.swap(v2);
	printVector5(v1);
	printVector5(v2);
}

// 2.实际用途
// 巧用swap可以收缩内存空间！！！
void test182()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;


	v.resize(3);
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	// 巧用swap收缩内存
	cout << "收缩内存后：" << endl;
	// vector<int>(v):匿名对象     匿名对象会自动回收内存（收缩内存）
	vector<int>(v).swap(v);
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;
}



int main18()
{
	test181();
	test182();
	return 0;
}