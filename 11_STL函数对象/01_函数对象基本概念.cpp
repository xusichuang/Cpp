
/*
�����������
	���غ������ò��������࣬������Ϊ��������
	��������ʹ�����ص�()ʱ����Ϊ���Ʒº������ã�Ҳ�зº���

���ʣ�
	�������󣨷º�������һ���࣬����һ������


�ص㣺
	����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
	�������󳬳���ͨ�����ĸ����������������Լ���״̬
	�������������Ϊ��������
*/
#include<iostream>
#include<string>
using namespace std;

// ����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
class MyAdd
{
public:
	

	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

// �������󳬳���ͨ�����ĸ����������������Լ���״̬
class MyPrint
{
public:
	int cnt;
	MyPrint()
	{
		this->cnt = 0;
	}
	void operator()(string str)
	{
		cout << str << endl;
		cnt++;
	}
};

void test011()
{
	// my_add��Ϊ��������
	MyAdd my_add;
	cout << my_add(10, 20) << endl;;
}

void test012()
{
	MyPrint my_print;
	my_print("hellp_world");
	my_print("hellp_world");
	my_print("hellp_world");
	my_print("hellp_world");

	cout << "myprint����" << my_print.cnt << "��" << endl;
}

//����������Ϊ��������
void do_print(MyPrint& mp,string str)
{
	mp(str);
}

void test013()
{
	MyPrint mp;
	do_print(mp, "I am programmer");
}

int main01()
{
	test011();
	test012();
	test013();
	return 0;
}