#include<iostream>
using namespace std;


// struct �ṹ���� ������[Ԫ�ظ���] = {  { } , { } ... { }}

// 1.����ṹ��
struct Student
{
	// ��Ա�б�

	// ����
	string name;
	// ����
	int age;
	// ����
	float score;
};



int main02()
{
	// 2.�����ṹ������
	struct Student stuarr[3] =
	{
		{"����", 18, 100},
		{"����", 25, 68},
		{"����", 41, 90}
	};
	// 3.���ṹ�������Ԫ�ظ�ֵ
	stuarr[2].name = "��������";
	
	// 4.�������
	for (int i = 0; i < 3; i++)
	{
		cout << "����:" << stuarr[i].name 
			<< "  ����:" << stuarr[i].age 
			<< "  �ɼ���" << stuarr[i].score << endl;
	}
	return 0;
}