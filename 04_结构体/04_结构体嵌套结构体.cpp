#include<iostream>
using namespace std;

// ѧ��
struct Student
{
	string name;
	int age;
	float score;
};

// ��ʦ
struct Teacher
{
	int id;
	string name;
	int age;
	Student stu;
};



int main04()
{
	Student stu1 = { "lisi",15,95 };
	Teacher tea1 = { 1000,"����",45,stu1 };
	cout << "��ʦ��ţ�" << tea1.id << " ��ʦ���֣�" << " ��ʦ�����䣺" << tea1.age 
		<<  "  ��ʦѧ��������" << tea1.stu.age 
		<< "  ��ʦѧ������" << tea1.stu.age << endl;
	return 0;
}