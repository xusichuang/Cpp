#include<iostream>
using namespace std;
#include<set>


// pair����
// ���ܣ�
//		�жҳ��ֵ����ݣ�����pair������Է�����������

// ���ִ�����ʽ��
//		pair<type,type> p(val1,val2)
//		pair<type,type> p = make_pair(val1,val2)



void test411()
{
	// ��һ�ַ�ʽ
	pair<string, int> p("Tom", 10);
	cout << "������" << p.first << "  ���䣺" << p.second << endl;


	// �ڶ��ַ�ʽ
	pair<string, int> p2 = make_pair("Sam", 60);
	cout << "������" << p2.first << "  ���䣺" << p2.second << endl;
}

int main411()
{
	test411();
	return 0;
}