#pragma once
#include<iostream>
using namespace std;
#include "03_worker.h"


// ��ͨԱ���ļ�
// ������ͨԱ����
class Employee :public Worker
{
public:
	// ���캯��
	Employee(int id, string name, int did);

	// ��ʾ������Ϣ
	virtual void showInfo();

	// ��ȡ��λ����
	virtual string getDeptName();
};
