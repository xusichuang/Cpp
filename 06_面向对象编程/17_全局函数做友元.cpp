#include<iostream>
using namespace std;


// ��Ԫ�ؼ���friend
// ��Ԫ������ʵ��
// 1.ȫ�ֺ�������Ԫ
// 2.������Ԫ
// 3.��Ա��������Ԫ


// ��������
class Buliding
{
	// ȫ�ֺ���goodfriend1��Building�ĺ����ѿ��Է���Building��˽�г�Ա
	friend void goodfriend1(Buliding& b);


public:
	// ����  livingroom
	string m_sittingRoom;

private:
	// ����
	string m_beddingRoom;

public:
	Buliding(string sittingRoom, string beddingRoom) :m_sittingRoom(sittingRoom), m_beddingRoom(beddingRoom)
	{

	}
};


// ȫ�ֺ���
void goodfriend1(Buliding& b)
{
	cout << "������ȫ�ֺ������ڷ��ʣ�" << b.m_sittingRoom << endl;
	cout << "������ȫ�ֺ������ڷ��ʣ�" << b.m_beddingRoom << endl;
}

// ָ�봫��
void goodfriend2(Buliding* b)
{
	cout << "������ȫ�ֺ������ڷ��ʣ�" << b->m_sittingRoom << endl;

}

void test0171()
{
	Buliding b("����","����");
	goodfriend1(b);

	goodfriend2(&b);
}

int main17()
{
	test0171();
	return 0;
}