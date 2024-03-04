#include<iostream>
using namespace std;
#include<list>


// 对list容器中的元素进行反转，以及将容器中的数据进行排序

// 函数原型：
//		reverse()
//		sort()！！！


void printList34(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


// 相当于lambda
bool mycompare(int v1, int v2)
{
	// 降序就让第一个数 > 第二个数
	return v1 > v2;
}


void test342()
{
	// 反转
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(66);
	L1.push_back(50);
	L1.push_back(30);
	cout << "L1容器反转前：" << endl;
	printList34(L1);
	
	cout << "L1容器反转后：" << endl;
	reverse(L1.begin(), L1.end());
	printList34(L1);

	// 排序
	cout << "L1容器排序后：" << endl;

	// 所有不支持随机访问迭代器的容器，不可以用标准算法！！！
	//sort(L1.begin(), L1.end());

	// 不支持随机访问迭代器的容器，内部会提供一些成员函数算法
	L1.sort();     
	printList34(L1);

	// 降序
	L1.sort(mycompare);
	printList34(L1);

}

int main34()
{
	test342();
	return 0;
}