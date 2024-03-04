#include<iostream>
using namespace std;
#include<deque>

// deque数据存取
// 函数原型：
// 1.at(int index);		//返回索引index的数据
// 2.operator[]			//返回索引index的数据
// deque.front()
// deque.back()


void test241()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;
}


int main24()
{
	test241();
	return 0;
}