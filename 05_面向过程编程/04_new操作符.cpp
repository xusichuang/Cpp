#include<iostream>
using namespace std;

// C++������new�������ڶ�����������
// 1.new�Ļ����﷨
int* func01()
{
	// �ڶ���������������
	// new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;
}

// 2.�ڶ�������new��������
void test01()
{
	// ����10���������ݵ�����
	int* arr = new int[10];
	// ��������Ҫ��ָ�룬���ʸ�ֵ������ʹ��arr[i]
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	cout << *arr << endl;
	// �ͷŶ�������
	delete[] arr;
}

int main04()
{
	
	

	int* p = func01();
	cout << *p << endl;
	// �������ٵ����ݣ��ɳ���Ա�ֶ����١��ֶ��ͷţ��ͷ����ò�����delete
	// �ͷŶ���������
	delete p;
	// �ڴ��Ѿ����ͷţ��ٴη�����ᱨ��
	// cout << *p << endl;
	

	test01();
	return 0;
}