#include<iostream>
using namespace std;

int main41()
{
	// ���Ƽ�ʹ��goto����Ϊ����Ҵ���ṹ
	cout << "1.XXXXX" << endl;

	cout << "2.XXXXX" << endl;
	goto FLAG;
	cout << "3.XXXXX" << endl;

	cout << "4.XXXXX" << endl;
	FLAG:
	cout << "5.XXXXX" << endl;
	return 0;
}