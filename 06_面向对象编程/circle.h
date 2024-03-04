// 防止头文件重复包含
#pragma once


#include<iostream>
using namespace std;

#include "point.h"
// 头文件只需要声明函数和属性就可以
class Circle
{
private:
	// 半径
	int m_r;
	// 圆心坐标(核心！！！)
	Point m_circle_center;

public:

	void setR(int r);

	// 获取半径
	int getR();

	// 设置圆心
	void setCenter(Point center);

	// 获取圆心坐标
	Point getCircle_center();
};
