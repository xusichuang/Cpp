// 防止头文件重复包含
#pragma once


#include<iostream>
using namespace std;


// 头文件只需要声明函数和属性就可以
// 点类
class Point
{
private:
	// x坐标
	int m_x;
	// y坐标
	int m_y;

public:
	// 设置x,y
	void set_x_y(int x, int y);
	// 获取x
	int get_x();
	// 获取y
	int get_y();
};