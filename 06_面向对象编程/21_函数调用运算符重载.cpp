#include<iostream>
using namespace std;



// �����������������
class MyPrint
{
public:

	// ���غ������������
	// operator()��������
	// �ڶ���()����Ҫ����Ĳ���
	void operator()(string text)
	{
		cout << text << endl;
	}
};

void test211()
{
	MyPrint mp;
	// ����ʹ�������ǳ������ں������ã���˳�Ϊ�º���
	mp("hello world");
}

// �º����ǳ���û�й̶���д��
class Myadd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test212()
{
	Myadd myadd;
	int res = myadd(1, 2);
	cout << res << endl;

	//������������
	cout << Myadd()(100, 200) << endl;
}



int main21()
{
	test211();
	test212();
	return 0;
}