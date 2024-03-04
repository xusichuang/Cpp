#include<iostream>
using namespace std;


// 类做友元

class Building;

class GoodDay
{
public:
	
	GoodDay();
	// 参观函数访问Building中的属性	
	void visit();
	Building* building;
	
};


class Building
{
	// goodgay类是Building类的好朋友，可以访问私有属性
	friend class GoodDay;
public:
	string m_livingRoom;

private:
	string m_beddingroom;


public:
	Building();
};


// 类外写成员函数
Building::Building()
{
	m_livingRoom = "客厅";
	m_beddingroom = "卧室";
}

GoodDay::GoodDay()
{
	// 创建建筑物对象
	building = new Building;
}

void GoodDay::visit()
{
	cout << "好朋友正在访问：" << building->m_livingRoom << endl;
	cout << "好朋友正在访问：" << building->m_livingRoom << endl;
}


void test0181()
{
	GoodDay gg;
	gg.visit();
}

int main18()
{
	test0181();
	return 0;
}