#include<iostream>
#include<map>
using namespace std;


/*

����ԭ�ͣ�
	size()		//����������Ԫ�ص���Ŀ
	empty()		//�ж������Ƿ�Ϊ��
	swap(st)	//����������������

*/

void printMap2(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << " " << it->second << endl;
	}

}


void test441()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	
	map<int, int> m2;
	m2.insert(pair<int, int>(10, 100));
	m2.insert(pair<int, int>(20, 200));
	m2.insert(pair<int, int>(30, 300));
	m2.insert(pair<int, int>(40, 400));

	cout << "����ǰ��" << endl;
	printMap2(m);
	cout << endl;
	printMap2(m2);


	cout << "������" << endl;
	swap(m, m2);
	printMap2(m);
	printMap2(m2);

}


int main44()
{
	test441();
	return 0;
}