#include<iostream>
using namespace std;

// 学生
struct Student
{
	string name;
	int age;
	float score;
};

// 老师
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
	Teacher tea1 = { 1000,"王丽",45,stu1 };
	cout << "老师编号：" << tea1.id << " 老师名字：" << " 老师的年龄：" << tea1.age 
		<<  "  老师学生的名字" << tea1.stu.age 
		<< "  老师学生年龄" << tea1.stu.age << endl;
	return 0;
}