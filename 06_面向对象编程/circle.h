// ��ֹͷ�ļ��ظ�����
#pragma once


#include<iostream>
using namespace std;

#include "point.h"
// ͷ�ļ�ֻ��Ҫ�������������ԾͿ���
class Circle
{
private:
	// �뾶
	int m_r;
	// Բ������(���ģ�����)
	Point m_circle_center;

public:

	void setR(int r);

	// ��ȡ�뾶
	int getR();

	// ����Բ��
	void setCenter(Point center);

	// ��ȡԲ������
	Point getCircle_center();
};
