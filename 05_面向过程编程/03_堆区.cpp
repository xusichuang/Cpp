#include<iostream>

using namespace std;

// �����������ɳ���Ա����������Ա���ͷţ���һֱ����
// ָ�������ָ�ĵ�ַ����ջ������ָ��ֵ����ڶ���
int* func()
{
	// ���ùؼ���new���Խ����ݿ��ٵ�����
	// ָ�뱾����Ҳ�Ǿֲ���������ջ����ָ�뱣��õ������Ƿ��ڶ���
	int* p  = new int(10);
	return p;
}

int main03()
{
	// C++����Ҫ����new�ڶ��������ڴ�
	int* p = func();
	cout << *p << endl;
	return 0;
}