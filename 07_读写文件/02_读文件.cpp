#include<iostream>
#include<fstream>
using namespace std;
#include<string>

void test02()
{
	// 1.����ͷ�ļ�<fstream>

	// 2.����������
	ifstream ifs;
	// 3.���ļ��������ж��Ƿ�ɹ���
	ifs.open("text.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	// 4.������

	/*
	��һ�ֶ����ݷ���
	char buf[1024] = { 0 };
	// ��ifs�е����ݶ���buf֮��
	// ÿ�ΰ��ж�ȡ
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	*/

	/*
	// �ڶ��ֶ����ݷ���
	char buf[1024] = { 0 };
	// ÿ�ΰ��ж�ȡ
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}
	*/


	/*
	// �����ֶ�ȡ���ݷ���
	string buf;
	// Ҫ���include<string>�Ż���ʾgetline����
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
	*/

	// ������
	char c;
	// ���û�����ļ�β     EOF:end of file
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	// 5.�ر��ļ�
	ifs.close();
}

int main02()
{
	test02();
	return 0;
}