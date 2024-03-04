#include<iostream>
using namespace std;
#include<set>


// set和multiset的区别
// 1.set不可以插入重复数据，而multiset可以
// 2.set插入数据的同时会返回插入接轨哦，表示插入是否成功
// 3.multiset不会检测数据，因此可以重复插入


void test401()
{
	set<int> s;
	pair<set<int>::iterator,bool> ret = s.insert(10);
	if (ret.second)
	{
		cout << "插入成功" << endl;
		cout << "元素为：" << *(ret.first) << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}
	ret = s.insert(10);
	if (ret.second)
	{
		cout << "插入成功" << endl;
		cout << "元素为：" << *(ret.first) << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}

	multiset<int> s2;
	multiset<int>::iterator ret2 = s2.insert(20);
	cout << "插入的元素为：" << *ret2 << endl;
	s2.insert(20);
	ret2 = s2.insert(20);
	cout << "插入的元素为：" << *ret2 << endl;
}

int main40()
{
	test401();
	return 0;
}