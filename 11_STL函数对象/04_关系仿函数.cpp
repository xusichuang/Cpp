#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

/*
��ϵ�º�������
	ʵ�ֹ�ϵ�Ա�

�º���ԭ�ͣ�
	template<class T> bool equal_to<T>				//����
	template<class T> bool not_equal_to<T>			//������
	template<class T> bool greater<T>				//����
	template<class T> bool greate_equal<T>			//���ڵ���
	template<class T> bool less<T>					//С��
	template<class T> bool less_equal<T>			//С�ڵ���
*/

void test041()
{
	vector<int> v;
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(10);
	v.push_back(50);
	cout << "����ǰ��" << endl;
	for (vector<int>::iterator it = v.begin();it!=v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	// ��������
	cout << "�����" << endl;
	sort(v.begin(), v.end(),greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main04()
{
	test041();
	return 0;
}