#include "circle.h"



void Circle::setR(int r)
{
	m_r = r;
}

// ��ȡ�뾶
int Circle::getR()
{
	return m_r;
}

// ����Բ��
void Circle::setCenter(Point center)
{
	m_circle_center = center;
}

// ��ȡԲ������
Point Circle::getCircle_center()
{
	return m_circle_center;
}
