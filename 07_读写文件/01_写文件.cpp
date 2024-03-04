
#include<iostream>
using namespace std;

// C++���ļ�������Ҫ����ͷ�ļ�<fstream>
#include<fstream>


// �ı����ͷ�Ϊ����
// 1.�ı��ļ�   -- �ļ����ı�ASCII����ʽ�洢������
// 2.�������ļ� -- �ļ����ı���������ʽ�洢��������


// �ļ����������
// 1.ofstream:д����
// 2.ifstream��������
// 3.fstream����д����

// �򿪷�ʽ
// ios::in      Ϊ���ļ������ļ�
// ios::out     Ϊд�ļ������ļ�
// ios::ate     ���ļ��ĳ�ʼλ��:�ļ�β
// ios::app     ׷�ӵķ�ʽд�ļ�
// ios::trunc   ����ļ���������ɾ�����ٴ���
//ios::binary   �����Ʒ�ʽ���ļ�

// ע�⣺�ļ��򿪷�ʽ�������ʹ�ã�����|������
// ���磺�ö����Ʒ�ʽд�ļ� ios::binary | ios::out


void test01()
{
	// 1.����ͷ�ļ�fstream

	// 2.����������
	ofstream ofs;

	// 3.ָ���򿪷�ʽ
	ofs.open("text.txt", ios::out);

	// 4.д����
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;

	// 5.�ر��ļ�
	ofs.close();
}

int main01()
{
	test01();
	system("pause");
	return 0;
}
