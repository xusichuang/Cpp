#include<iostream>
using namespace std;


int main31()
{
	// 1. ������switch�����
	cout << "��ѡ�񸱱��Ѷ�" << endl;
	cout << "1.��ͨ" << endl;
	cout << "2.�е�" << endl;
	cout << "3.����" << endl;
	int select;
	cin >> select;

	switch (select)
	{
	case 1:
		cout << "��ѡ�������ͨ�Ѷ�" << endl;
		break;
	case 2:
		cout << "��ѡ������е��Ѷ�" << endl;
		break;
	case 3:
		cout << "��ѡ����������Ѷ�" << endl;
		break;
	default:
		cout << "�������" << endl;
		break;
	}
	// 2.������ѭ�������

	// 3.������Ƕ��ѭ�������
	// breakֻ��������ǰ��ѭ����䣡����
	return 0;
}