#include<iostream>
#include<map>

using namespace std;
/*
map������Ԫ�ض���pair
pair�е�һ��Ԫ��Ϊkey�������������ã��ڶ���Ԫ��Ϊvalue��ʵֵ��
����Ԫ�ض������Ԫ�صļ�ֱ�Զ�����


���ʣ�
	map/multimap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�ֵ�

�ŵ㣺
	���Ը���keyֵ�����ҵ�value

map��multimap������
	map���������������ظ���keyԪ��
	multimap�������������ظ���keyԪ��


���죺
	map<T1,T2> mp;			//mapĬ�Ϲ��캯��
	maop(const map &mp)		//��������

��ֵ��
	map& operator=(const map &mp)	//���صȺŲ�����
*/

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << " " << "value=" << it->second << endl;
	}
}

void test431()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));

	printMap(m);

	cout << endl;
	// ��������
	map<int, int> m2(m);
	printMap(m2);
	cout << endl;

	// ��ֵ
	map<int, int> m3;
	m3 = m2;
	printMap(m3);

}

int main43()
{
	test431();
	return 0;
}