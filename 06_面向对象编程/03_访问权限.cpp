#include<iostream>
using namespace std;

// ����Ȩ��
// 1.����Ȩ��public          ��Ա  ���ڿ��Է���,������Է���
// 2.����Ȩ��protected       ��Ա  ���ڿ��Է���,���ⲻ���Է���      ���ӿ��Է��ʸ����б���������
// 3.˽��Ȩ��private		 ��Ա  ���ڿ��Է���,���ⲻ���Է���		���Ӳ����Է��ʸ��׵�˽������

//2��3��Ҫ���ڼ̳��ϲ�ͬ

class Person
{
public:
	// ����Ȩ��
	string m_Name;

protected:
	// ����Ȩ��
	string m_Car;

private:
	int m_Password;

public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 159123;
	}
};

int main03()
{   
	Person p1;
	p1.m_Name = "����";
	// p1.m_Car = "���ۡ�
	// p1.m_password = 123456   
	// ����Ȩ�޺�˽��Ȩ�����ݣ�������ʲ���

	return 0;
}