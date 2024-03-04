#include<iostream>
using namespace std;
#include<vector>

//vector��������

void printVector5(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

// 1.����ʹ��
void test181()
{
	cout << "����ǰ��" << endl;
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector5(v1);


	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v2.push_back(10-i);
	}
	printVector5(v2);


	cout << "������" << endl;
	v1.swap(v2);
	printVector5(v1);
	printVector5(v2);
}

// 2.ʵ����;
// ����swap���������ڴ�ռ䣡����
void test182()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;


	v.resize(3);
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;

	// ����swap�����ڴ�
	cout << "�����ڴ��" << endl;
	// vector<int>(v):��������     ����������Զ������ڴ棨�����ڴ棩
	vector<int>(v).swap(v);
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;
}



int main18()
{
	test181();
	test182();
	return 0;
}