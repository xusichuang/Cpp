#pragma once

#include<iostream>
using namespace std;

// �̳и���
#include "03_worker.h"


// ������
class Boss :public Worker
{
public:
	//���캯��
	Boss(int id, string name, int depid);

	// ��ʾ������Ϣ
	virtual void showInfo();

	// ��ȡ��λ����
	virtual string getDeptName();


};
