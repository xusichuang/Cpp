#include<iostream>
using namespace std;
#include<set>


// set��multiset������
// 1.set�����Բ����ظ����ݣ���multiset����
// 2.set�������ݵ�ͬʱ�᷵�ز���ӹ�Ŷ����ʾ�����Ƿ�ɹ�
// 3.multiset���������ݣ���˿����ظ�����


void test401()
{
	set<int> s;
	pair<set<int>::iterator,bool> ret = s.insert(10);
	if (ret.second)
	{
		cout << "����ɹ�" << endl;
		cout << "Ԫ��Ϊ��" << *(ret.first) << endl;
	}
	else
	{
		cout << "����ʧ��" << endl;
	}
	ret = s.insert(10);
	if (ret.second)
	{
		cout << "����ɹ�" << endl;
		cout << "Ԫ��Ϊ��" << *(ret.first) << endl;
	}
	else
	{
		cout << "����ʧ��" << endl;
	}

	multiset<int> s2;
	multiset<int>::iterator ret2 = s2.insert(20);
	cout << "�����Ԫ��Ϊ��" << *ret2 << endl;
	s2.insert(20);
	ret2 = s2.insert(20);
	cout << "�����Ԫ��Ϊ��" << *ret2 << endl;
}

int main40()
{
	test401();
	return 0;
}