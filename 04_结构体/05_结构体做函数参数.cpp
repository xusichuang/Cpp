#include<iostream>
using namespace std;

struct Student
{
	string name;
	int age;
	float score;
};

void printStudent1(Student s)
{
	cout << "ѧ����������" << s.name << "  ѧ�������䣺" << s.age << " ѧ���ĳɼ���" << s.score << endl;
}

void printStudent2(Student *p)
{
	cout << "ѧ����������" << p->name << "  ѧ�������䣺" << p->age << " ѧ���ĳɼ���" << p->score << endl;
	
}

int main05()
{
	Student stu = { "����", 15,95 };
	printStudent1(stu);

	// int* p = &stu
	printStudent2(&stu);
	return 0;
}