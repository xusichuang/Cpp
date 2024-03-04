#include<iostream>

using namespace std;


class Student
{
public:
	string m_name;
	int m_id;
public:
	void setName_and_ID(string name, int id)
	{
		m_name = name;
		m_id = id;
	}
	void showStudent()
	{
		cout << m_name << "的学号为：" << m_id << endl;
	}
};

int main02()
{
	Student s1;
	s1.setName_and_ID("张三", 1000);
	s1.showStudent();
	return 0;
}