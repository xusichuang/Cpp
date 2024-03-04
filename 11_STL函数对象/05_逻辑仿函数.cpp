#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

/*
逻辑仿函数功能
	实现逻辑运算

函数原型：
	template<clas T> bool logical_and<T>		//逻辑与
	template<clas T> bool logical_or<T>			//逻辑或
	template<clas T> bool logical_not<T>		//逻辑非

*/

void test051()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	// 利用逻辑非  将容器v 搬运到 容器v2中，并执行取反操作
	vector<bool> v2;
	// 必须为v2开辟空间再搬运
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test051();
	return 0;
}