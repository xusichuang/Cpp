#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

/*
�߼��º�������
	ʵ���߼�����

����ԭ�ͣ�
	template<clas T> bool logical_and<T>		//�߼���
	template<clas T> bool logical_or<T>			//�߼���
	template<clas T> bool logical_not<T>		//�߼���

*/

void test051()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	// �����߼���  ������v ���˵� ����v2�У���ִ��ȡ������
	vector<bool> v2;
	// ����Ϊv2���ٿռ��ٰ���
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test051();
	return 0;
}