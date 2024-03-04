#include<iostream>
using namespace std;


// 友元关键字friend
// 友元的三种实现
// 1.全局函数做友元
// 2.类做友元
// 3.成员函数做友元


// 建筑物类
class Buliding
{
	// 全局函数goodfriend1是Building的好朋友可以访问Building中私有成员
	friend void goodfriend1(Buliding& b);


public:
	// 客厅  livingroom
	string m_sittingRoom;

private:
	// 卧室
	string m_beddingRoom;

public:
	Buliding(string sittingRoom, string beddingRoom) :m_sittingRoom(sittingRoom), m_beddingRoom(beddingRoom)
	{

	}
};


// 全局函数
void goodfriend1(Buliding& b)
{
	cout << "好朋友全局函数正在访问：" << b.m_sittingRoom << endl;
	cout << "好朋友全局函数正在访问：" << b.m_beddingRoom << endl;
}

// 指针传参
void goodfriend2(Buliding* b)
{
	cout << "好朋友全局函数正在访问：" << b->m_sittingRoom << endl;

}

void test0171()
{
	Buliding b("客厅","卧室");
	goodfriend1(b);

	goodfriend2(&b);
}

int main17()
{
	test0171();
	return 0;
}