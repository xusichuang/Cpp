#include<iostream>
using namespace std;

// �ṹ�������û��Զ�����������ͣ������û��洢��ͬ����������

// 1.����ѧ���������ͣ�ѧ�����������������䣬������
// �Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
struct Student
{
	// ��Ա�б�

	// ����
	string name;
	// ����
	int age;
	// ����
	float score;
}s3; // 2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����

int main01()
{
	// 2.ͨ��ѧ�����ʹ�������ѧ��
	// 2.1 struct Student s1     ��������ʱstruct�ؼ��ֿ���ʡ��
	struct Student s1;
	s1.name = "zhangsan";
	s1.age = 15;
	s1.score = 9.1;
	cout << "������" << s1.name << "  ����:" << s1.age << "  �ɼ���" << s1.score << endl;

	// 2.2 struct Student s2 = {...}
	struct Student s2 = { "zhangsan", 15,95.0 };
	cout << "������" << s2.name << "  ����:" << s2.age << "  �ɼ���" << s2.score << endl;

	// 2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����
	s3.name = "zhangsan";
	s3.age = 15;
	s3.score = 59.1;
	cout << "������" << s3.name << "  ����:" << s3.age << "  �ɼ���" << s3.score << endl;

	// ��һ���ֱȽϳ��ã������űȽ��ټ�
	return 0;
}