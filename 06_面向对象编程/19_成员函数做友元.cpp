#include<iostream>

using namespace std;


class Building19;

class GoodGay
{
public:
	GoodGay();
	Building19* building;
	// ��visit���������Է���Building��˽�г�Ա
	void visit1();

	// ��visit2�������Է���Building��˽�г�Ա
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


// ����ʵ�ֳ�Ա����
Building19::Building19()
{
	m_livingRoom = "����";
	m_beddingRoom = "����";
}

GoodGay::GoodGay()
{
	building = new Building19;
}

void GoodGay::visit1()
{
	cout << "visit1�������ڷ��ʣ�" << building->m_livingRoom << endl;
}


void GoodGay::visit2()
{
	cout << "visit2�������ڷ��ʣ�" << building->m_livingRoom << endl;
	cout << "visit2�������ڷ��ʣ�" << building->m_beddingRoom << endl;

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