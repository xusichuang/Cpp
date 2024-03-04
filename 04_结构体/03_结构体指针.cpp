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
	// 结构体指针
	// 1.创建学生结构体变量
	student s = { "张三", 15, 100 };
	
	// 2.通过指针指向结构体变量
	struct student* p = &s;

	// 3.通过指针访问结构体变量中的数据
	cout << "姓名：" << p->name << "  年龄:" << p->age << "  成绩：" << p->score << endl;

	return 0;
}