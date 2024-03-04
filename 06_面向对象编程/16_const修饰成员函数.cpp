#include<iostream>
using namespace std;

// 常函数：
// 成员函数后面加const，我们称这个函数为常函数
// 常函数内不可以修改成员属性
// 成员属性声明时加关键字mutable，在常函数中依然可以修改


//常对象：
// 声明对象前加const称该对象为常对象
// 常对象只能调用常函数


class Person
{
public:
	int m_A;
	mutable int m_B;   //特殊变量，在常函数中也可以修改这个值
	// this指针的本质是指针常量，指针的指向是不可以修改的
	// this  相当于Person* const this
	
	// 常函数
	// 在成员函数后面加const，修饰的是this指针，让指针指向的值也不可以修改
	void showPerson() const
	{
		// m_A = 200;
		//  this = NULL;   this指针已经指向p，不可以再修改指针的指向
		m_B = 200l;
	}

	void func()
	{

	}
};

void test0161()
{
	Person p;
	p.showPerson();
}


void test0162()
{
	// 在对象前加const，变为常对象
	const Person p2;
	// p2.m_A = 200;
	// 常变量在常对象下也可以修改
	p2.m_B = 100;

	// 常对象只能调用常函数
	p2.showPerson();
}


int main16()
{
	test0161();
	test0162();
	return 0;
}