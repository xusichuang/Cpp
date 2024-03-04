#include<iostream>

using namespace std;


class Building19;

class GoodGay
{
public:
	GoodGay();
	Building19* building;
	// 让visit函数不可以访问Building中私有成员
	void visit1();

	// 让visit2函数可以访问Building中私有成员
	void visit2();
};


class Building19
{
	friend void GoodGay::visit2();
public:
	Building19();
public:
	string m_livingRoom;

private:
	string m_beddingRoom;
};


// 类外实现成员函数
Building19::Building19()
{
	m_livingRoom = "客厅";
	m_beddingRoom = "卧室";
}

GoodGay::GoodGay()
{
	building = new Building19;
}

void GoodGay::visit1()
{
	cout << "visit1函数正在访问：" << building->m_livingRoom << endl;
}


void GoodGay::visit2()
{
	cout << "visit2函数正在访问：" << building->m_livingRoom << endl;
	cout << "visit2函数正在访问：" << building->m_beddingRoom << endl;

}


void test0191()
{
	GoodGay gg;
	gg.visit1();
	gg.visit2();
}

int main19()
{
	test0191();
	return 0;
}