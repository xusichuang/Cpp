#include<iostream>
using namespace std;


// 第一种解决方式，直接包含  源文件
// 很少使用，因为会暴漏源文件
#include "person.cpp"


// 第二种解决方式,将.h和.cpp的内容写到一起，将后缀名改为.hpp文件（常用）


void test142()
{
	Person<string, int> p("张三", 15);
	p.showInfo();

}

int main141()
{
	test142();
	return 0;
}