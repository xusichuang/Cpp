#include<iostream>

using namespace std;

#include "point.h"
#include "circle.h"
// 类就是一种自定义数据类型
// 点类
/*class Point
{
private:
	// x坐标
	int m_x;
	// y坐标
	int m_y;

public:
	void set_x_y(int x, int y)
	{
		m_x = x;
		m_y = y;
	}

	int get_x()
	{
		return m_x;
	}

	int get_y()
	{
		return m_y;
	}
};

class Circle
{
private:
	// 半径
	int m_r;
	// 圆心坐标(核心！！！)
	Point m_circle_center;

public:

	void setR(int r)
	{
		m_r = r;
	}

	// 获取半径
	int getR()
	{
		return m_r;
	}

	// 设置圆心
	void setCenter(Point center)
	{
		m_circle_center = center;
	}

	// 获取圆心坐标
	Point getCircle_center()
	{
		return m_circle_center;
	}
};*/

void point_relationship_to_circle(Circle& c, Point& p)
{
	// 计算两点之间距离 平方

	// x1-x2
	int X = c.getCircle_center().get_x() - p.get_x();

	// y1-y2
	int Y = c.getCircle_center().get_y() - p.get_y();

	// R
	int R = c.getR();

	// 判断点与圆的关系
	int distance_2 = pow(X, 2) + pow(Y, 2);
	if (distance_2 < pow(R, 2))
	{
		cout << "点P(" << p.get_x() << "," << p.get_y() << ")在圆内" << endl;
	}
	else if (distance_2 == pow(R, 2))
	{
		cout << "点P(" << p.get_x() << "," << p.get_y() << ")在圆上" << endl;
	}

	else
	{
		cout << "点P(" << p.get_x() << "," << p.get_y() << ")在圆外" << endl;
	}
}


int main071()
{
	// 点
	Point p;
	p.set_x_y(6, 1);


	// 圆心
	Point center;
	center.set_x_y(1, 1);
	Circle c;
	c.setCenter(center);
	c.setR(5);

	point_relationship_to_circle(c, p);
	return 0;
}