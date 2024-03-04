#include "point.h"


// 点类
// 只需要留下函数即可
// 加上作用域Point::表示成员函数
void Point::set_x_y(int x, int y)
{
	m_x = x;
	m_y = y;
}

int Point::get_x()
{
	return m_x;
}

int Point::get_y()
{
	return m_y;
}
