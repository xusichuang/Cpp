#include<iostream>
using namespace std;
#include<deque>

// deque�����ɾ��


// ����ԭ�ͣ�
// ���˲��������
//		push_back(elem)			//������β�����һ������
//		push_front(elem)		//������ͷ������һ������
//		pop_back()				//ɾ���������һ������
//		pop_front()				//ɾ��������һ������

// ָ��λ�ò���
//		insert(pos,elem)		//��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��
//		insert(pos,n,elem)		//��posλ�ò���n��elem���ݣ��޷���ֵ
//		insert(pos,begin,end)	//��posλ�ò���[begin,end)��������ݣ��޷���ֵ������

//		clear()													//ɾ������������Ԫ��
//		erase(const_iterator pos)								//ɾ��������ָ���Ԫ��pos��������һ�����ݵ�λ��
//		erase(const_iterator begin,const_iterator end)			//ɾ����������begin��end֮���Ԫ�أ�������һ�����ݵ�λ��

void printDeque4(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it=100 �����е����ݲ������޸�
		cout << *it << " ";
	}
	cout << endl;
}

void test231()
{
	cout << "β�������ݣ�" << endl;
	// β��
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque4(d1);

	cout << "ͷ�������ݣ�" << endl;
	// ͷ��
	d1.push_front(100);
	d1.push_front(200);
	printDeque4(d1);

	cout << "βɾ������ݣ�" << endl;
	// βɾ
	d1.pop_back();
	printDeque4(d1);

	cout << "ͷɾ������ݣ�" << endl;
	// ͷɾ
	d1.pop_front();
	printDeque4(d1);

}


void test232()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque4(d1);


	cout << "�������ݺ�" << endl;
	// insert����
	d1.insert(d1.begin(), 1000);
	printDeque4(d1);

	d1.insert(d1.begin(), 2, 500000);
	printDeque4(d1);


	// ��������룡����
	deque<int> d2;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque4(d2);
	cout << "��������֮��" << endl;
	d2.insert(d2.begin(), d1.begin(), d1.end());
	printDeque4(d2);
}

void test233()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque4(d1);

	// ɾ��������
	cout << "ɾ����" << endl;
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	printDeque4(d1);

	// �����䷽ʽɾ��
	d1.erase(d1.begin(), d1.begin() + 2);
	printDeque4(d1);
	
	cout << "���֮��" << endl;
	d1.clear();
	printDeque4(d1);
}

int main23()
{
	test231();

	test232();
	
	test233();
	return 0;
}