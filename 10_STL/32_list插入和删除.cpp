#include<iostream>
using namespace std;
#include<list>

// 对list容器进行数据的插入和删除
// 函数原型：
//		push_back(elem);
//		pop_back();
//		push_front(elem);
//		pop_front();
//		insert(pos,elem);
//		insert(pos,n,elem);
//		insert(pos,begin,end)
//		clear()
//		erase(begin,end)
//		erase(pos)
//		remove(elem)		//删除容器中所有与elem值相匹配的元素

void printList32(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test322()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);

	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);
	printList32(L1);


	L1.pop_back();
	printList32(L1);

	L1.pop_front();
	printList32(L1);

	// 插入！！！
	list<int>::iterator it = L1.begin();
	// 注意it只能++，不能+1
	L1.insert(++it, 1000000000);
	printList32(L1);

	// 删除
	list<int>::iterator it2 = L1.end();
	it2--;
	L1.erase(--it2);
	printList32(L1);

	// 移除！！！
	L1.push_back(1000000000);
	cout << "移除前:" << endl;
	printList32(L1);
	cout << "移除后:" << endl;
	L1.remove(1000000000);
	printList32(L1);
}

int main32()
{
	test322();
	return 0;
}