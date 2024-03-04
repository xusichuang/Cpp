#include<iostream>
#include<map>

using namespace std;

/*
函数原型：
	insert(elem);		//在map容器中插入元素
	clear();			//清除所有元素
	erase(pos)			//删除pos迭代器所指的元素，返回下一个元素的迭代器
	erase(beg,end)		//删除区间[beg,end)的所有元素，返回元素的迭代器
	earase(key)			//删除map容器中为key的元素

*/

void printMap3(map<int,int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << " value=" << it->second << endl;
	}
}


void test01()
{

	map<int, int> m;
	// 插入
	// 第一种
	m.insert(pair<int, int>(1, 10));

	// 第二种
	m.insert(make_pair(2, 20));

	// 第三种
	m.insert(map<int, int>::value_type(3, 30));

	// 第四种
	m[4] = 40;
	printMap3(m);
	cout << endl;

	//删除
	m.erase(m.begin());
	printMap3(m);
	cout << endl;

	m.erase(3);		//按照key删除
	printMap3(m);
	cout << endl;

	// 清空
	m.clear();
	cout << "map容器中的元素已清空" << endl;


}

int main45()
{
	test01();
	return 0;
}