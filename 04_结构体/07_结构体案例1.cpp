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
		cout << "��������ʦ��������" << endl;
		cin >> Name;
		tarry[i].teacher_name = Name;
		for (int j = 0; j < 5; j++)
		{
			string s_name;
			int s_score;
			cout << "������ѧ��������������" << endl;
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
		cout << "��ʦ��������" << tarry[i].teacher_name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ������:" << tarry[i].student_array[j].student_name <<
				"\t���Է���:" << tarry[i].student_array[j].score << endl;
		}
	}
}

int main07()
{
	// �������
	srand((unsigned int)time(NULL));
	// û��������������rand()ʼ����ͬһ����

	// 1.����3����ʦ������
	Teacher8 tarray[3];
	int len = sizeof(tarray) / sizeof(tarray[0]);


	// 2.ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	allocate(tarray, len);
	// 3.��ӡ������ʦ��������ѧ����Ϣ
	// ���������൱�ڵ�ַ����
	Printall_info(tarray, len);
	return 0;
}