#include<iostream>

using namespace std;

int main16()
{
	// ǰ�õ��������ñ���+1�ٽ��б��ʽ����
	int a1 = 10;
	int b1 = ++a1 * 10;
	cout << "b1=" << b1 << endl;

	// ���õ���:�Ƚ��б��ʽ�������ñ���+1
	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "b2=" << b2 << endl;
	return 0;
}