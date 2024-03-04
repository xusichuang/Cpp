#include<iostream>

using namespace std;
// 每一个非静态成员函数只会生成一份函数实例，也就是说多个同类型的对象会公用一块代码
// 那么如何区分哪个对象调用自己的呢？

// C++通过提供特殊的对象指针：this指针，解决上述问题，this指针指向被调用的成员函数所属的对象！！！
// this指针是隐含每一个非静态成员函数内的一种指针
// this指针不需要定义，直接使用即可


// 用途：
// 1.当形参和成员变量同名时，可用this指针来区分
// 2.在类的非静态成员函数中返回对象本身，可使用return *this



class Person
{
public:
	int age;
	Person(int age)
	{
		// this指针指向被调用成员函数所属的对象
		this->age = age;
	}

	void PersonAdd(Person& p)
	{
		this->age += p.age;
	}
};

class Person123
{
public:
	int age;
	Person123(int age)
	{
		// this指针指向被调用成员函数所属的对象
		this->age = age;
	}


	// 这里必须加引用符号，否则不会修改原来的值!!!
	Person123& PersonAdd(Person123& p)
	{
		this->age += p.age;
		return *this;
	}
};


void test014()
{
	Person p1(18);
	cout << "p1的年龄为" << p1.age << endl;
}

void test0141()
{
	Person p1(10);
	Person p2(10);
	p2.PersonAdd(p1);
	cout << "p2的年龄为" << p2.age << endl;

	Person123 p3(10);
	Person123 p4(20);
	Person123 p5(10);
	// 链式编程思想
	p5.PersonAdd(p4).PersonAdd(p3);
	cout << "p5 的年龄为" << p5.age << endl;
}

int main14()
{
	test014();
	test0141();
	return 0;
}