#include "06_boss.h"

//���캯��
Boss::Boss(int id, string name, int depid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId = depid;
}

// ��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ��:�ƶ�ս�Լƻ�" << endl;
}

// ��ȡ��λ����
string Boss::getDeptName()
{
	return string("����");
}