#include<iostream>
using namespace std;
#include<vector>

// vector�����ʹ�С


// ����ԭ��
//		empty();
//		capacity();					// ����������
//		size()	
//		resize(int num)				// ����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ��
//									// ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
// 
//		resize(int num,elem)		// ����ָ�������ĳ���Ϊnum���������䳤������elem�����λ��
									// ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��

void printVector3(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

void test151()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector3(v1);


	// Ĭ�ϲ���0
	v1.resize(15);
	printVector3(v1);


	// ָ�����ֵΪ100
	v1.resize(20, 100);
	printVector3(v1);


}

int main15()
{
	test151();
	return 0;
}