#include<iostream>
using namespace std;

// string�е����ַ���ȡ�ķ�ʽ������
//				char& operator[](int n)			//ͨ��[]��ʽȡ�ַ�
//				char& at(int n)					//ͨ��at������ȡ�ַ�


void test101()
{
	string str = "hello";
	cout << "str=" << str << endl;

	//1.ͨ��[]��ʽȡ�ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	//2.ͨ��at������ȡ�ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	// �޸ĵ����ַ���''  �ַ�����"" 
	str[0] = 'x';
	cout << "str=" << str << endl;
	str.at(1) = 'x';
	cout << "str=" << str << endl;
}


int main10()
{
	test101();
	return 0;
}