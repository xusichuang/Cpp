#include<iostream>
using namespace std;
#include<deque>

// deque���ݴ�ȡ
// ����ԭ�ͣ�
// 1.at(int index);		//��������index������
// 2.operator[]			//��������index������
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