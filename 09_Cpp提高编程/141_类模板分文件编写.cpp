#include<iostream>
using namespace std;


// ��һ�ֽ����ʽ��ֱ�Ӱ���  Դ�ļ�
// ����ʹ�ã���Ϊ�ᱩ©Դ�ļ�
#include "person.cpp"


// �ڶ��ֽ����ʽ,��.h��.cpp������д��һ�𣬽���׺����Ϊ.hpp�ļ������ã�


void test142()
{
	Person<string, int> p("����", 15);
	p.showInfo();

}

int main141()
{
	test142();
	return 0;
}