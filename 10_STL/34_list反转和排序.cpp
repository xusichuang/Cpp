#include<iostream>
using namespace std;
#include<list>


// ��list�����е�Ԫ�ؽ��з�ת���Լ��������е����ݽ�������

// ����ԭ�ͣ�
//		reverse()
//		sort()������


void printList34(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


// �൱��lambda
bool mycompare(int v1, int v2)
{
	// ������õ�һ���� > �ڶ�����
	return v1 > v2;
}


void test342()
{
	// ��ת
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(66);
	L1.push_back(50);
	L1.push_back(30);
	cout << "L1������תǰ��" << endl;
	printList34(L1);
	
	cout << "L1������ת��" << endl;
	reverse(L1.begin(), L1.end());
	printList34(L1);

	// ����
	cout << "L1���������" << endl;

	// ���в�֧��������ʵ��������������������ñ�׼�㷨������
	//sort(L1.begin(), L1.end());

	// ��֧��������ʵ��������������ڲ����ṩһЩ��Ա�����㷨
	L1.sort();     
	printList34(L1);

	// ����
	L1.sort(mycompare);
	printList34(L1);

}

int main34()
{
	test342();
	return 0;
}