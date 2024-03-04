#include<iostream>
using namespace std;

// ������ʹ��ʱ��Ҫ����ͷ�ļ�
// ����vectorͷ�ļ�
#include<vector>
// ��׼�㷨ͷ�ļ�
#include<algorithm>

// vector�巨������������
// ������vector
// �㷨��for_each
// ������vector<int>::iterator


void myPrint(int val)
{
	cout << val << endl;
}

void test021()
{
	vector<int> v;

	// �������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	// ͨ�����������������е�����
	// ��ʼ��������ָ�������е�һ��Ԫ��
	vector<int>::iterator itBegin = v.begin();
	// ������������ָ�����������һ��Ԫ�ص���һ��λ�ã�����
	vector<int>::iterator itEnd = v.end();


	// �������ݷ�ʽ
	// ��һ��
	while (itBegin!=itEnd)
	{
		// *itBegin��ȡ���е�ֵ
		cout << *itBegin << endl;
		itBegin++;
	}

	cout << "-------------------------------------" << endl;

	// �ڶ���
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	cout << "-------------------------------------" << endl;
	// �����֣�����STL�ṩ�ı����㷨  �������ͷ�ļ�#include<algorithm>
	// ���������˻ص��� ֱ�Ӳ鿴����
	for_each(v.begin(), v.end(), myPrint);
}

int main02()
{
	test021();
	return 0;
}