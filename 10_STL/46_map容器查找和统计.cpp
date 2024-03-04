#include<iostream>
#include<map>
using namespace std;

/*
函数原型：
	find(key)		//查找key是否存在，若存在，返回该键的元素和迭代器，若不存在则返回map.end()
	count(key)		//统计key的元素个数

*/

void test461()
{
	// 查找
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(5, 50));

	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		cout << "查找到了元素key=" << (*pos).first << " value=" << pos->second << endl;
	}
	else
	{
		cout << "未找到元素数据" << endl;
	}
	// 统计,map不允许重复，结果要么是0，要么是1
	cout << "元素key=3有" << m.count(3) << "个" << endl;
}

int main46()
{
	test461();
	return 0;
}