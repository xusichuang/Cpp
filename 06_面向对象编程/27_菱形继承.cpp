#include<iostream>
using namespace std;

// ���μ̳и��
// ����������̳�ͬһ������
// ����ĳ����ͬʱ�̳�����������
// ���ּ̳г�Ϊ���μ̳У�������ʯ�̳�

// ���μ̳�����
// 1.��̳��˶�������ݣ���ͬ���̳��˶�������ݣ�������̳�������յ����ݣ���������ʹ������ʱ���ͻ����������
// 2.������̳��Զ�������ݼ̳������ݣ�ʵ��ֻ��Ҫһ�����ݼ���
class Animals
{
public:
	int m_Age;
};

// ������̳У�������μ̳е����⣡����
// �̳�֮ǰ  ����  �ؼ���virtual  �����̳У�����
// Animals�� ��Ϊ�����
// ����
class Sheep :virtual public Animals
{

};
//����
class Tuo:virtual public Animals
{

};
//������
class SheepTuo :public Sheep, public Tuo
{

};

void test271()
{
	SheepTuo st;
	// st.m_Age = 18;   ����ȷ
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 20;
	// ���μ̳У���������ӵ����ͬ�����ԣ���Ҫ��������������
	cout << "Sheep::m_Age=" << st.Sheep::m_Age << endl;
	cout << "Tuo::m_Age=" << st.Tuo::m_Age << endl;

	// ���μ̳е������������ݣ��˷���Դ���������ֻҪ��һ�ݼ��ɣ�����
	// ����virtual������st.m_Age
	cout << "st.m_Age =" << st.m_Age << endl;

	// �����ļ���ӦĿ¼cd C:\Users\15310\Desktop\C++\06_���������
	// �鿴SheepTuo�����Ϣ
	// cl /d1 reportSingleClassLayoutSheepTuo 27_���μ̳�.cpp
}

int main27()
{
	test271();
	return 0;
}