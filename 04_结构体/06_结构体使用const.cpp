#include<iostream>
using namespace std;

struct Student
{
	string name;
	int age;
	float score;
};

// 常量指针const int* p
// 特点：指针的指针指向可以修改，但是指针指向的值不可以更改

// 指针常量int * const p
// 特点：指针的指向不可以该，指针指向的值可以改
void printStudent(Student* const p)
{
	p->name = "lisi";
	cout << "学生的姓名：" << p->name << endl;
}

int main06()
{
	Student stu = { "wangwu",15,95 };
	printStudent(&stu);
	return 0;
}