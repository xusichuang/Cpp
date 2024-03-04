#include<iostream>
using namespace std;

// 第二种解决方式,将.h和.cpp的内容写到一起，将后缀名改为.hpp文件（常用）
#include "person2.hpp"

void test143()
{
	Person<string, int> p("张三", 15);
	p.showInfo();

}

int main142()
{
	test143();
	return 0;
}