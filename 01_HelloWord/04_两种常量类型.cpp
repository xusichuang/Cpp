#include <iostream>

using namespace std;
 
#define Day 7

// 1. #define �곣����   #define ������ ����ֵ
// ͨ�����ļ��Ϸ�����

//2. const���εı���     const  �������� = ����ֵ

int main()
{
	// ���ɶԳ����޸ģ�����ᱨ��
	cout << "һ���ܹ��У�" << Day << "��" << endl;

	const int day = 14;
	day = 10;
	cout << "һ���ܹ��У�" << day << "��" << endl;
	return 0;
}
