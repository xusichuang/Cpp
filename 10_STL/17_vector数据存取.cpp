#include<iostream>
using namespace std;
#include<vector>

// vector���ݴ�ȡ

// ����ԭ��
// at(int index)			// ��������index��ָ�������
// operator[]				// ��������index��ָ�������
// ע�⣺[]Խ��ᵼ�³��������atԽ������׳��쳣
// front()					// ���������е�һ������Ԫ��
// back()					// �������������һ������Ԫ��


void test171()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	// ����[]���������е�Ԫ��
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	// ����at��ʽ����Ԫ��
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	// ��ȡ��һ��Ԫ��
	cout << "��һ��Ԫ��:" << v1.front() << endl;

	// ��ȡ���һ��Ԫ��
	cout << "���һ��Ԫ�أ�" << v1.back() << endl;
}

int main17()
{
	test171();
	return 0;
}