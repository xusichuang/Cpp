#include<iostream>
using namespace std;
#include<set>

// 函数原型：
// find(key)				//查找key是否存在，若存在，返回该键的元素的迭代器，若不存在，返回set.end()
// count(key)				//统计key的元素个数


void test391()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	// 查找
	set<int>::iterator pos = s1.find(20);
	if (pos != s1.end())
	{
		cout << "找到元素" << "  元素为：" << *pos << endl;
		cout << "其个数为：" <<s1.count(20) << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

}

int main39()
{
	test391();
	return 0;
}