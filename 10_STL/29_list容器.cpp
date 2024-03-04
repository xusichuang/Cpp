#include<iostream>
using namespace std;
#include<list>

// list基本概念
// 功能：将数据进行链式存储
// 链表(list)是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接来实现的

// 链表的组成：链表由一系列结点组成
// 结点的组成：一个存储数据元素的数据域，另一个是存储下一个结点地址的指针域

// STL的链表是一个双向循环链表
// 由于链表的存储方式并不是连续的内存空间，因此链表list的迭代器支持前移和后移，属于双向迭代器

// list的优点：
// 采用动态存储分配，不会造成内存浪费和溢出
// 链表指向插入和删除操作十分方便，修改指针即可，不需要移动大量元素

// list的缺点：
// 链表灵活，但是空间（指针域）和时间（遍历）额外耗费较大

// list有一个重要的性质，插入和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的



// 函数原型
// list<T> lst;				//list采用模板类实现对象的默认构造
// list(beg,end)			//构造函数将[beg,end)区间的元素拷贝给本身
// list(n,elem)				//构造函数将n个elem拷贝给本身
// list(const list& lst)	//拷贝构造函数


void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test291()
{
	//创建list容器
	list<int> L1;   // 默认构造

	// 添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);

	// 遍历容器
	printList(L1);

	// 区间方式构造
	list<int>L2(L1.begin(), L1.end());
	printList(L2);

	// 拷贝构造
	list<int>L3(L2);
	printList(L3);

	// n个elem
	list<int>L4(4, 100);
	printList(L4);
}


int main29()
{
	test291();
	return 0;
}