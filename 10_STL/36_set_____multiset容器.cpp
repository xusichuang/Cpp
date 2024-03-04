#include<iostream>
using namespace std;
#include<set>


// set�����������Ԫ�ض����ڲ���ʱ�Զ�������
// ���ʣ�
// set  multiset����  ����ʽ�������ײ�ṹ���ö�����ʵ��

// set��multiset����
// set���������������ظ���Ԫ��
// multiset�������������ظ���Ԫ��


// ʹ��set��multisetֻ�����setͷ�ļ�����


// ���죺
//		set<T> st;				//Ĭ�Ϲ��캯��
//		set(const set &st);		//�������캯��

// ��ֵ��
//		set& operator=(const set &st)		//���صȺ������

template<class T>
void printSet(const T& s)
{
	for (auto it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test362()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(5);
	s1.insert(5);
	// set�ᰴ�մ�С�����˳���Զ�����
	printSet(s1);

	// ��������
	set<int> s2(s1);
	printSet(s2);

	// ��ֵ
	set<int> s3 = s2;
	printSet(s3);

	multiset<int> ss;
	ss.insert(10);
	ss.insert(5);
	ss.insert(10);
	ss.insert(20);

	printSet(ss);
}

int main36()
{
	test362();
	return 0;
}
