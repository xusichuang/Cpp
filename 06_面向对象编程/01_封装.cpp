#include<iostream>
using namespace std;

const double PI = 3.14;

// 设计一个圆类，求圆的周长
class Circle
{
	// 访问权限
	// 公共权限
public:

	// 属性
	// 半径
	int m_r;

	// 方法
	// 获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};


int main01()
{
	// 实例化对象
	Circle c1;
	// 给圆对象的属性进行赋值
	c1.m_r = 10;
	cout << "圆的周长为：" << c1.calculateZC() << endl;
	
	return 0;
}