#include<iostream>
using namespace std;

#include<fstream>


// �������ļ� д�ļ�
class Person
{
public:
	// ���ַ���������ʾ�ַ���������string m_Name������
	char m_Name[64];
	int m_age;
};


void test03()
{
	// 1.����ͷ�ļ�<fstream>

	// 2.����������
	ofstream ofs;
	
	// 3.���ļ�
	ofs.open("person.txt", ios::out | ios::binary);

	// 2.3.���Ժϲ�    ofstream ofs("person.txt", ios::out | ios::binary);

	// 4.д�ļ�
	Person p = { "����",18 };
	// ��p�ĵ�ַǿת��char*
	ofs.write((const char*)&p,sizeof(Person));

	// 5.�ر��ļ�
	ofs.close();
}

void test032()
{
	// 1.����ͷ�ļ�<fstream>

	// 2.����������
	ifstream ifs;
	// 3.���ļ�   �ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	// 4.���ļ�
	Person p1;
	ifs.read((char*)&p1, sizeof(Person));
	cout << "����:" << p1.m_Name << "����:" << p1.m_age << endl;


	// 5.�ر��ļ�
	ifs.close();
}

int main()
{
	//test03();
	test032();
	return 0;
}