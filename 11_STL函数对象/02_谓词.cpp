/*
ν�ʸ���
	����bool���͵ķº�����Ϊν��
	���operator()����һ����������ô����һԪν��
	���operator()����������������ô������Ԫν��


*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


class GreaterFive
{
public:
	bool operator()(int v1)
	{
		return v1 > 5;
	}
};

void test021()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	// ����������  ��û�д���5������
	// GreaterFiver������������
	vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
	if (pos != v.end())
	{
		
		for (; pos != v.end(); pos++)
		{
			cout << *pos << " ";
		}
		cout << endl;
	}
	else
	{
		cout << "δ�ҵ�����5������" << endl;
	}
	
}

class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void test022()
{
	vector<int> v;
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(10);
	v.push_back(50);

	// ��С����
	// sort(v.begin(),v.end());

	//ʹ�ú�������  ���дӴ�С����
	sort(v.begin(), v.end(), MyCompare());
	cout << "�Ӵ�С����" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


int main02()
{
	test021();
	test022();
	return 0;
}