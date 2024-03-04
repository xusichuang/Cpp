#include<iostream>
#include<map>

using namespace std;

/*
����ԭ�ͣ�
	insert(elem);		//��map�����в���Ԫ��
	clear();			//�������Ԫ��
	erase(pos)			//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
	erase(beg,end)		//ɾ������[beg,end)������Ԫ�أ�����Ԫ�صĵ�����
	earase(key)			//ɾ��map������Ϊkey��Ԫ��

*/

void printMap3(map<int,int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << " value=" << it->second << endl;
	}
}


void test01()
{

	map<int, int> m;
	// ����
	// ��һ��
	m.insert(pair<int, int>(1, 10));

	// �ڶ���
	m.insert(make_pair(2, 20));

	// ������
	m.insert(map<int, int>::value_type(3, 30));

	// ������
	m[4] = 40;
	printMap3(m);
	cout << endl;

	//ɾ��
	m.erase(m.begin());
	printMap3(m);
	cout << endl;

	m.erase(3);		//����keyɾ��
	printMap3(m);
	cout << endl;

	// ���
	m.clear();
	cout << "map�����е�Ԫ�������" << endl;


}

int main45()
{
	test01();
	return 0;
}