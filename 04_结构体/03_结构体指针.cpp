#include<iostream>
using namespace std;


struct student
{
	string name;
	int age;
	int score;
};

int main03()
{
	// �ṹ��ָ��
	// 1.����ѧ���ṹ�����
	student s = { "����", 15, 100 };
	
	// 2.ͨ��ָ��ָ��ṹ�����
	struct student* p = &s;

	// 3.ͨ��ָ����ʽṹ������е�����
	cout << "������" << p->name << "  ����:" << p->age << "  �ɼ���" << p->score << endl;

	return 0;
}