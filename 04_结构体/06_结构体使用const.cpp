#include<iostream>
using namespace std;

struct Student
{
	string name;
	int age;
	float score;
};

// ����ָ��const int* p
// �ص㣺ָ���ָ��ָ������޸ģ�����ָ��ָ���ֵ�����Ը���

// ָ�볣��int * const p
// �ص㣺ָ���ָ�򲻿��Ըã�ָ��ָ���ֵ���Ը�
void printStudent(Student* const p)
{
	p->name = "lisi";
	cout << "ѧ����������" << p->name << endl;
}

int main06()
{
	Student stu = { "wangwu",15,95 };
	printStudent(&stu);
	return 0;
}