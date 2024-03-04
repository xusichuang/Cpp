#include<iostream>
using namespace std;
#include<deque>


// ��deque�����Ĵ�С���в���

// ����ԭ�ͣ�
//		deque.empty()
//		deque.size()
//		deque.resize(num)
//		deque.resize(num,elem);

void printDeque3(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it=100 �����е����ݲ������޸�
		cout << *it << " ";
	}
	cout << endl;
}

void test221()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque3(d1);

	if (d1.empty())
	{
		cout << "deqiueΪ��" << endl;
	}
	else
	{
		cout << "deqiue��Ϊ��" << endl;
	}

	// deque����û�������������

	d1.resize(15);
	printDeque3(d1);


	d1.resize(20, 100);
	printDeque3(d1);

}

int main22()
{
	test221();
	return 0;
}