//#include<iostream>
//using namespace std;
#include "04_employee.h"

Employee::Employee(int id,string name,int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId = did;
}

// ͷ�ļ������� virtual void showInfo()��Դ�ļ�������дvirutal
void Employee::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ��:��ɾ�����������" << endl;
}

// const char*  ���Զ�ת��string
string Employee::getDeptName()
{
	// ����string()����һ��c���Ե��ַ���
	return string("Ա��");
}