#include<iostream>
using namespace std;

// ��C++��struct��classΨһ���������Ĭ�ϵķ���Ȩ�޲�ͬ
// structĬ��Ȩ��Ϊ����
// classĬ��Ȩ��Ϊ˽��

class C1
{
	int m_A; // Ĭ��Ȩ����˽��
};

struct S1
{
	int m_A;  // Ĭ��Ȩ���ǹ���
};

int main04()
{
	C1 c;
	// ���ʲ���c.m_A

	S1 s;
	s.m_A;
	return 0;
}