#pragma once
#include<iostream>
using namespace std;

// �̳и���
#include "03_worker.h"


// ������
class Manager :public Worker
{
public:
	//���캯��
	Manager(int id, string name, int depid);

	// ��ʾ������Ϣ
	virtual void showInfo();

	// ��ȡ��λ����
	virtual string getDeptName();

};
