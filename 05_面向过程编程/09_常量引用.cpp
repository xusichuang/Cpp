#include<iostream>
using namespace std;

// ����������Ҫ�����������βΣ���ֹ�����

void showValue(const int& val)
{
	// val = 1000;
	cout << "val=" << val << endl;
}


int main09()
{
	int a = 10;
	int& ref = a;  //���ñ�����һ��Ϸ��ĵ�ַ

	// ����const֮��������Զ����������������� 
	// int temp = 10;  int& m = temp;
	// ����const֮���Ϊֻ���������޸�
	const int& m = 10;

	showValue(ref);
	cout << "a=" << a << endl;

	return 0;
}