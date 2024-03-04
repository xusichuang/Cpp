#include<iostream>
#include<map>
using namespace std;

// 仿函数
class MyCompare2
{
public:
	//第一个（）：重载的符号    第二个（）是参数列表
	// 在你的 MyCompare2 类中添加 const 修饰符，以确保 operator() 是一个 const 成员函数
	bool operator()(int v1, int v2) const
	{
		//降序
		return v1 > v2;
	}
};


void test471()
{
	// map一旦插入，则无法改变顺序，自动默认从小到大
	/*
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(5, 50));
	*/


	// 想要改变顺序，必须在模板参数指定好仿函数
	map<int, int,MyCompare2> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(5, 50));


	for (map<int, int, MyCompare2>::iterator it=m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << "value=" << it->second << endl;
	}
}



int main47()
{
	test471();
	return 0;
}