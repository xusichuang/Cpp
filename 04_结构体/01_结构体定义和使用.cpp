#include<iostream>
using namespace std;

// 结构体属于用户自定义的数据类型，允许用户存储不同的数据类型

// 1.创建学生数据类型：学生包括（姓名，年龄，分数）
// 自定义数据类型：一些类型集合组成的一个类型
struct Student
{
	// 成员列表

	// 姓名
	string name;
	// 年龄
	int age;
	// 分数
	float score;
}s3; // 2.3 在定义结构体时顺便创建结构体变量

int main01()
{
	// 2.通过学生类型创建具体学生
	// 2.1 struct Student s1     创建变量时struct关键字可以省略
	struct Student s1;
	s1.name = "zhangsan";
	s1.age = 15;
	s1.score = 9.1;
	cout << "姓名：" << s1.name << "  年龄:" << s1.age << "  成绩：" << s1.score << endl;

	// 2.2 struct Student s2 = {...}
	struct Student s2 = { "zhangsan", 15,95.0 };
	cout << "姓名：" << s2.name << "  年龄:" << s2.age << "  成绩：" << s2.score << endl;

	// 2.3 在定义结构体时顺便创建结构体变量
	s3.name = "zhangsan";
	s3.age = 15;
	s3.score = 59.1;
	cout << "姓名：" << s3.name << "  年龄:" << s3.age << "  成绩：" << s3.score << endl;

	// 第一二种比较常用，第三张比较少见
	return 0;
}