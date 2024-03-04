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
	cout << "学生的姓名：" << s.name << "  学生的年龄：" << s.age << " 学生的成绩：" << s.score << endl;
}

void printStudent2(Student *p)
{
	cout << "学生的姓名：" << p->name << "  学生的年龄：" << p->age << " 学生的成绩：" << p->score << endl;
	
}

int main05()
{
	Student stu = { "张三", 15,95 };
	printStudent1(stu);

	// int* p = &stu
	printStudent2(&stu);
	return 0;
}