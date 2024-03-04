#include<iostream>
#include<map>

using namespace std;
/*
map中所有元素都是pair
pair中第一个元素为key，起到索引的作用，第二个元素为value（实值）
所有元素都会根据元素的简直自动排序


本质：
	map/multimap属于关联式容器，底层结构是用二叉树实现的

优点：
	可以根据key值快速找到value

map和multimap的区别
	map不允许容器中有重复的key元素
	multimap允许容器中有重复的key元素


构造：
	map<T1,T2> mp;			//map默认构造函数
	maop(const map &mp)		//拷贝构造

赋值：
	map& operator=(const map &mp)	//重载等号操作符
*/

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << " " << "value=" << it->second << endl;
	}
}

void test431()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));

	printMap(m);

	cout << endl;
	// 拷贝构造
	map<int, int> m2(m);
	printMap(m2);
	cout << endl;

	// 赋值
	map<int, int> m3;
	m3 = m2;
	printMap(m3);

}

int main43()
{
	test431();
	return 0;
}