#include<iostream>
using namespace std;

// �ڶ��ֽ����ʽ,��.h��.cpp������д��һ�𣬽���׺����Ϊ.hpp�ļ������ã�
#include "person2.hpp"

void test143()
{
	Person<string, int> p("����", 15);
	p.showInfo();

}

int main142()
{
	test143();
	return 0;
}