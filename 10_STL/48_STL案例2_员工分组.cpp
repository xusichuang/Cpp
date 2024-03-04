#include<iostream>
using namespace std;
/*
��˾��Ƹ��10��Ա��(ABCDEFGHIJ)��10��Ա�����빫˾����Ҫָ��Ա�����ĸ����Ź���
Ա����Ϣ�����������ʣ����ŷ�Ϊ�߻��������з�
�����10��Ա�����䲿�ź͹���
ͨ��multimap������Ϣ����  key�����ű�ţ�value��Ա����
�ֲ�����ʾԱ����Ϣ

*/


/*
ʵ�ֲ��裺
1.����10��Ա�����ŵ�vector��
2.����vector�����У�ȡ��ÿ��Ա���������������
3.����󣬽�Ա�����ű����Ϊkey������Ա����Ϊvalue������multimap������
4.�ֲ�����ʾԱ����Ϣ
*/

#include<map>
#include<vector>
#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
	string m_Name;
	int m_Salary;

};

void createWorker(vector<Worker>& v)
{
	string NameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker wk;
		wk.m_Name = "Ա��";
		wk.m_Name += NameSeed[i];
		wk.m_Salary = rand() % 10000 + 10000;		// 10000~19999
		v.push_back(wk);
	}
}

void printWorker(vector<Worker>& v)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_Name << "  ���ʣ�" << it->m_Salary << endl;
	}
}

void setGroup(vector<Worker>& v,multimap<int,Worker>& mp)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int depid = rand() % 3;	// 0 1 2
		mp.insert({ depid, *it });
	}
}
void showWorkerInfo(multimap<int, Worker>& mp)
{
	cout << "�߻����ţ�" << endl;
	multimap<int,Worker>::iterator pos=mp.find(0);
	// ͳ�Ʋ߻���������
	int cnt = mp.count(CEHUA);
	int index = 0;
	for (; pos != mp.end() && index<cnt; pos++,index++)
	{
		cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}

	cout << "�������ţ�" << endl;
	pos = mp.find(MEISHU);
	cnt = mp.count(MEISHU);
	index = 0;
	for (; pos != mp.end() && index < cnt; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}

	cout << "�з����ţ�" << endl;
	pos = mp.find(YANFA);
	cnt = mp.count(YANFA);
	index = 0;
	for (; pos != mp.end() && index < cnt; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}

}

int main()
{
	// ��������������������ӣ�ͨ��ʹ�õ�ǰʱ��
	srand(static_cast<unsigned int>(time(nullptr)));

	// 1.����Ա��
	vector<Worker> vWorker;
	createWorker(vWorker);
	printWorker(vWorker);
	// 2.Ա������
	// <��ţ�Ա��>
	multimap<int,Worker> mp;
	setGroup(vWorker, mp);

	// 3.������ʾԱ��
	showWorkerInfo(mp);

	return 0;
}