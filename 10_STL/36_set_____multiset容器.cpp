#include<iostream>
using namespace std;
#include<set>


// set基本概念：所有元素都会在插入时自动被排序
// 本质：
// set  multiset属于  关联式容器，底层结构是用二叉树实现

// set与multiset区别：
// set不允许容器中有重复的元素
// multiset允许容器中有重复的元素


// 使用set与multiset只需包含set头文件即可


// 构造：
//		set<T> st;				//默认构造函数
//		set(const set &st);		//拷贝构造函数

// 赋值：
//		set& operator=(const set &st)		//重载等号运算符

template<class T>
void printSet(const T& s)
{
	for (auto it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test362()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(5);
	s1.insert(5);
	// set会按照从小到达的顺序自动排序
	printSet(s1);

	// 拷贝构造
	set<int> s2(s1);
	printSet(s2);

	// 赋值
	set<int> s3 = s2;
	printSet(s3);

	multiset<int> ss;
	ss.insert(10);
	ss.insert(5);
	ss.insert(10);
	ss.insert(20);

	printSet(ss);
}

int main36()
{
	test362();
	return 0;
}
