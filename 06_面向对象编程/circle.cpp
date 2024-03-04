#include "circle.h"



void Circle::setR(int r)
{
	m_r = r;
}

// 获取半径
int Circle::getR()
{
	return m_r;
}

// 设置圆心
void Circle::setCenter(Point center)
{
	m_circle_center = center;
}

// 获取圆心坐标
Point Circle::getCircle_center()
{
	return m_circle_center;
}
