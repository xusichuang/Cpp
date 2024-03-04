//#include<iostream>
//using namespace std;
#include "04_employee.h"

Employee::Employee(int id,string name,int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId = did;
}

// 头文件已声明 virtual void showInfo()，源文件则无需写virutal
void Employee::showInfo()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责:完成经理分配的任务" << endl;
}

// const char*  会自动转成string
string Employee::getDeptName()
{
	// 不加string()则是一个c语言的字符串
	return string("员工");
}