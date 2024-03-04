#include<iostream>
using namespace std;
#include<set>


// pair对组
// 功能：
//		承兑出现的数据，利用pair对组可以返回两个数据

// 两种创建方式：
//		pair<type,type> p(val1,val2)
//		pair<type,type> p = make_pair(val1,val2)



void test411()
{
	// 第一种方式
	pair<string, int> p("Tom", 10);
	cout << "姓名：" << p.first << "  年龄：" << p.second << endl;


	// 第二种方式
	pair<string, int> p2 = make_pair("Sam", 60);
	cout << "姓名：" << p2.first << "  年龄：" << p2.second << endl;
}

int main411()
{
	test411();
	return 0;
}