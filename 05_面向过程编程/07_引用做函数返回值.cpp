#include<iostream>;
using namespace std;

// ������Ϊ��������ֵ���ڵ�
// ע�⣺
// 1.��Ҫ���ؾֲ���������

// ���ؾֲ���������
int& test01()
{
	int a = 10;  // �ֲ��������ջ��
	return a;
}


// ���ؾ�̬��������
int& test02()
{
	static int a = 20;  // ��̬�������ȫ����
	return a;
}

int main07()
{
	int& ref = test01();
	// �ֲ������ڵ�������ͷ���
	cout << "ref=" << ref << endl;

	int& ref2 = test02();
	cout << "ref2=" << ref2 << endl;

	// 2.�����ĵ��ÿ�����Ϊ��ֵ
	test02() = 1000;
	cout << "ref2=" << ref2 << endl;
	
	return 0;
}