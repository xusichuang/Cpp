#include<iostream>
using namespace std;


// ������Ԫ

class Building;

class GoodDay
{
public:
	
	GoodDay();
	// �ιۺ�������Building�е�����	
	void visit();
	Building* building;
	
};


class Building
{
	// goodgay����Building��ĺ����ѣ����Է���˽������
	friend class GoodDay;
public:
	string m_livingRoom;

private:
	string m_beddingroom;


public:
	Building();
};


// ����д��Ա����
Building::Building()
{
	m_livingRoom = "����";
	m_beddingroom = "����";
}

GoodDay::GoodDay()
{
	// �������������
	building = new Building;
}

void GoodDay::visit()
{
	cout << "���������ڷ��ʣ�" << building->m_livingRoom << endl;
	cout << "���������ڷ��ʣ�" << building->m_livingRoom << endl;
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