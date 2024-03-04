#include<iostream>
using namespace std;
#include<list>


void printList31(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test312()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	printList31(L1);


	if (L1.empty())
	{
		cout << "L1容器为空" << endl;
	}
	else
	{
		cout << "L1容器不为空" << endl;
		cout << "L1的元素为：" << L1.size() << endl;
	}

	L1.resize(10, 100);
	printList31(L1);


}

int main31()
{
	test312();
	return 0;
}