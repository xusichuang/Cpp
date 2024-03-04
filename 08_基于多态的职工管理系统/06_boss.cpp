#include "06_boss.h"

//构造函数
Boss::Boss(int id, string name, int depid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId = depid;
}

// 显示个人信息
void Boss::showInfo()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责:制定战略计划" << endl;
}

// 获取岗位名称
string Boss::getDeptName()
{
	return string("经理");
}