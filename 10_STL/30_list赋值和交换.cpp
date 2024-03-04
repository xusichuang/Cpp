#include<iostream>
using namespace std;
#include<list>


void printList30(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

// list容器赋值和交换
void test301()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	printList30(L1);

	list<int>L2 = L1;
	printList30(L2);

	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	printList30(L3);

	list<int>L4;
	L4.assign(10, 100);
	printList30(L4);

}

void test302()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);

	list<int>L2;
	L2.assign(10, 100);
	cout << "交换前：" << endl;
	printList30(L1);
	printList30(L2);

	cout << "交换后：" << endl;
	swap(L1, L2);
	printList30(L1);
	printList30(L2);
}

int main30()
{
	// test301();
	test302();
	return 0;
}