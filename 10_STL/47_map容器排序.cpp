#include<iostream>
#include<map>
using namespace std;

// �º���
class MyCompare2
{
public:
	//��һ�����������صķ���    �ڶ��������ǲ����б�
	// ����� MyCompare2 ������� const ���η�����ȷ�� operator() ��һ�� const ��Ա����
	bool operator()(int v1, int v2) const
	{
		//����
		return v1 > v2;
	}
};


void test471()
{
	// mapһ�����룬���޷��ı�˳���Զ�Ĭ�ϴ�С����
	/*
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(5, 50));
	*/


	// ��Ҫ�ı�˳�򣬱�����ģ�����ָ���÷º���
	map<int, int,MyCompare2> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(5, 50));


	for (map<int, int, MyCompare2>::iterator it=m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << "value=" << it->second << endl;
	}
}



int main47()
{
	test471();
	return 0;
}