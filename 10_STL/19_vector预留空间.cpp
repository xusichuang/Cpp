#include<iostream>
using namespace std;
#include<vector>

// vector预留空间
// 功能：减少vector在动态扩展容量时的扩展次数

// 函数原型：
//		reserve(int len)		// 容器预留len个元素长度，预留位置不初始化，元素不可访问！！！





void test191()
{
	vector<int> v;


	int num = 0;   //统计开辟的次数
	int* p = nullptr;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}

	cout << "开辟的次数num=" << num << endl;



	vector<int> v1;
	v1.reserve(100000);
	num = 0;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}
	cout << "开辟的次数num=" << num << endl;

}

int main19()
{
	test191();
	return 0;
}