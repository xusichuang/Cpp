// ��ֹͷ�ļ��ظ�����
#pragma once
#include<iostream>
using namespace std;

#include "03_worker.h"
#include "04_employee.h"
#include "05_manager.h"
#include "06_boss.h"
#include <fstream>

#define FILENAME "expFile.txt"
class WorkerManager
{
public:
	// ���캯��
	WorkerManager();

	// չʾ�˵�
	void Show_Menu();

	// �˳�ϵͳ
	void exit_System();

	// ��¼ְ��������
	int m_Emp_Num;

	// ְ������ָ��   Worker ** arry = new Worker* [5]
	Worker** m_Emp_Arr;
	
	// ���ְ��
	void Add_Emp();

	// �������ݵ��ļ���
	void save();

	// �ж�expFile.txt�ļ��Ƿ�Ϊ��  ��־
	bool m_FileEmpty;

	// ͳ������
	int get_Emp_Num();

	// ��ʼ��Ա��
	void init_Emp();

	// ��ʾְ��
	void Show_Emp_Info();

	// ɾ��ְ��
	void Delete_Emp_Info();

	// ����ְ������ж��Ƿ���ڣ��������򷵻�ְ���������е�λ�ã����򷵻�-1
	int IsExist(int id);

	// �޸�ְ��
	void Modify_Emp_Info();

	// ����ְ��
	void fin_Emp();

	// ְ���������
	void Sort_Empid();

	// ����ļ�
	void Clean_File();

	// ��������
	~WorkerManager();
};