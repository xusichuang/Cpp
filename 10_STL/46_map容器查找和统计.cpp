#include<iostream>
#include<map>
using namespace std;

/*
����ԭ�ͣ�
	find(key)		//����key�Ƿ���ڣ������ڣ����ظü���Ԫ�غ͵����������������򷵻�map.end()
	count(key)		//ͳ��key��Ԫ�ظ���

*/

void test461()
{
	// ����
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(5, 50));

	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		cout << "���ҵ���Ԫ��key=" << (*pos).first << " value=" << pos->second << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ������" << endl;
	}
	// ͳ��,map�������ظ������Ҫô��0��Ҫô��1
	cout << "Ԫ��key=3��" << m.count(3) << "��" << endl;
}

int main46()
{
	test461();
	return 0;
}