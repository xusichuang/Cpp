// ��ֹͷ�ļ��ظ�����
#pragma once


#include<iostream>
using namespace std;


// ͷ�ļ�ֻ��Ҫ�������������ԾͿ���
// ����
class Point
{
private:
	// x����
	int m_x;
	// y����
	int m_y;

public:
	// ����x,y
	void set_x_y(int x, int y);
	// ��ȡx
	int get_x();
	// ��ȡy
	int get_y();
};