#include<iostream>

using namespace std;

// ��Ա��������Ϊ˽��
// �ŵ�1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
// �ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��


// �ܽ�
// ˽�����Բ��������ⱻֱ�ӷ��ʿ���ͨ���ຯ�����������ӷ��ʺ��޸�˽������

class Person123
{
private:
	// ����  �ɶ���д
	string m_Name;
	// ���� ֻ��
	int m_Age;

public:
	void setName(string name)
	{
		m_Name = name;
	}

	string getName()
	{
		return m_Name;
	}

	int getAge()
	{
		m_Age = 15;
		return m_Age;
	}
};

int main05()
{
	Person123 p5;
	p5.setName("����");
	string s = p5.getName();
	int age = p5.getAge();
	cout << "����Ϊ��" << s << endl;
	cout << "����Ϊ��" << age << endl;
	return 0;
}