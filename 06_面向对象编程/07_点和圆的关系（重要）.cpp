#include<iostream>

using namespace std;

#include "point.h"
#include "circle.h"
// �����һ���Զ�����������
// ����
/*class Point
{
private:
	// x����
	int m_x;
	// y����
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
	// �뾶
	int m_r;
	// Բ������(���ģ�����)
	Point m_circle_center;

public:

	void setR(int r)
	{
		m_r = r;
	}

	// ��ȡ�뾶
	int getR()
	{
		return m_r;
	}

	// ����Բ��
	void setCenter(Point center)
	{
		m_circle_center = center;
	}

	// ��ȡԲ������
	Point getCircle_center()
	{
		return m_circle_center;
	}
};*/

void point_relationship_to_circle(Circle& c, Point& p)
{
	// ��������֮����� ƽ��

	// x1-x2
	int X = c.getCircle_center().get_x() - p.get_x();

	// y1-y2
	int Y = c.getCircle_center().get_y() - p.get_y();

	// R
	int R = c.getR();

	// �жϵ���Բ�Ĺ�ϵ
	int distance_2 = pow(X, 2) + pow(Y, 2);
	if (distance_2 < pow(R, 2))
	{
		cout << "��P(" << p.get_x() << "," << p.get_y() << ")��Բ��" << endl;
	}
	else if (distance_2 == pow(R, 2))
	{
		cout << "��P(" << p.get_x() << "," << p.get_y() << ")��Բ��" << endl;
	}

	else
	{
		cout << "��P(" << p.get_x() << "," << p.get_y() << ")��Բ��" << endl;
	}
}


int main071()
{
	// ��
	Point p;
	p.set_x_y(6, 1);


	// Բ��
	Point center;
	center.set_x_y(1, 1);
	Circle c;
	c.setCenter(center);
	c.setR(5);

	point_relationship_to_circle(c, p);
	return 0;
}