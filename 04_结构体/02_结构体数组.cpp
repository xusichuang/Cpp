#include<iostream>
using namespace std;


// struct 结构体名 数组名[元素个数] = {  { } , { } ... { }}

// 1.定义结构体
struct Student
{
	// 成员列表

	// 姓名
	string name;
	// 年龄
	int age;
	// 分数
	float score;
};



int main02()
{
	// 2.创建结构体数组
	struct Student stuarr[3] =
	{
		{"张三", 18, 100},
		{"李四", 25, 68},
		{"王五", 41, 90}
	};
	// 3.给结构体数组的元素赋值
	stuarr[2].name = "王二麻子";
	
	// 4.遍历输出
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名:" << stuarr[i].name 
			<< "  年龄:" << stuarr[i].age 
			<< "  成绩：" << stuarr[i].score << endl;
	}
	return 0;
}