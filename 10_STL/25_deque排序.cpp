#include<iostream>
using namespace std;
#include<deque>

// deque����

#include<algorithm>

// �㷨��
// sort(iterator begin,iterator end)        ��begin��end�����ڵ�Ԫ�ؽ�������


void printDeque5(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it=100 �����е����ݲ������޸�
		cout << *it << " ";
	}
	cout << endl;
}

void test251()
{
	deque<int> d;
	d.push_back(120);
	d.push_back(10);
	d.push_back(20);
	d.push_front(15);
	d.push_front(3);
	d.push_front(199);

	printDeque5(d);

	// ����
	// ����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
	sort(d.begin(), d.end());
	cout << "�����" << endl;
	printDeque5(d);
}


int main25()
{
	test251();
	return 0;
}