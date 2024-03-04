#include<iostream>
#include<ctime>
using namespace std;

struct Student8
{
	string student_name;
	int score;
};

struct  Teacher8
{
	string teacher_name;
	Student8 student_array[5];
};

/*void allocate_input(Teacher tarry[], int len)
{
	for (int i = 0; i < len; i++)
	{
		string Name;
		cout << "请输入老师的姓名：" << endl;
		cin >> Name;
		tarry[i].teacher_name = Name;
		for (int j = 0; j < 5; j++)
		{
			string s_name;
			int s_score;
			cout << "请输入学生的姓名、分数" << endl;
			cin >> s_name;
			cout << endl;
			cin >> s_score;
			
			tarry[i].student_array[j].student_name = s_name;
			tarry[i].student_array[j].score = s_score;

		}
	}
}*/
void allocate(Teacher8 tarry[], int len)
{
	string tname = "ABC";
	string sname = "ABCDE";
	for (int i = 0; i < len; i++)
	{

		tarry[i].teacher_name = "Teacher_";
		tarry[i].teacher_name += tname[i];
		for (int j = 0; j < 5; j++)
		{
			

			tarry[i].student_array[j].student_name = "Student_";
			tarry[i].student_array[j].student_name += sname[j];
			tarry[i].student_array[j].score = rand() % 100;

		}
	}
}
void Printall_info(Teacher8 tarry[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师的姓名：" << tarry[i].teacher_name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名:" << tarry[i].student_array[j].student_name <<
				"\t考试分数:" << tarry[i].student_array[j].score << endl;
		}
	}
}

int main07()
{
	// 随机种子
	srand((unsigned int)time(NULL));
	// 没有上面的随机种子rand()始终是同一个数

	// 1.创建3名老师的数组
	Teacher8 tarray[3];
	int len = sizeof(tarray) / sizeof(tarray[0]);


	// 2.通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	allocate(tarray, len);
	// 3.打印所有老师及所带的学生信息
	// 传入数组相当于地址传递
	Printall_info(tarray, len);
	return 0;
}