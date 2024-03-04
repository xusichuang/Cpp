#include<iostream>
using namespace std;
#include<deque>

// deque������������

// ���ܣ�˫�����飨˫�˶��У������Զ�ͷ�˽��в�����ɾ������

// deque��vector����
// 1.vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��Ч��Խ��
// 2.deque��Զ��ԣ���ͷ������ɾ���ٶȱ�vector��
// 3.vector����Ԫ��ʱ���ٶȻ��deque��


// deque�����ĵ�����Ҳ��֧��������ʵ�
// deque���캯��
// ����ԭ�ͣ�	
//		deque<T> deqT					// Ĭ�Ϲ�����ʽ
//		deque(begin,end)				// ���캯����[begin,end)�����е�Ԫ�ؿ���������
//		deque(n,elem)					// ���캯����n��elem����������
//		deque(const deque& deq)			// �������캯��



void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it=100 �����е����ݲ������޸�
		cout << *it << " ";
	}
	cout << endl;
}


void test201()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);


	deque<int>d2(d1.begin(), d1.end());
	printDeque(d2);

	deque<int>d3(10, 100);
	printDeque(d3);


	deque<int> d4(d3);
	printDeque(d4);
}

int main20()
{
	test201();
	return 0;
}