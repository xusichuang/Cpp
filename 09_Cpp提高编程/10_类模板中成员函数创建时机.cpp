
#include<iostream>
using namespace std;
// 类模板中成员函数创建时机
// 1.普通类中的成员函数一开始就创建
// 2.类模板中的成员函数在调用时才创建


class Person1
{
public:
	void showPerson1()
	{
		cout << "Peron1  Show" << endl;
	}
};


class Person2
{
public:
	void showPerson2()
	{
		cout << "Peron2  Show" << endl;
	}
};
template<class T>
class ABCD
{
public:
	T object;

	// 类模板中的成员函数
	void func1()
	{
		// 2.类模板中的成员函数在调用时才创建
		// 此时并不知道object是上面类型，不会被创建出来
		object.showPerson1();
	}
	void func2()
	{
		object.showPerson2();
	}
};


void test101()
{
	ABCD<Person1> m;
	m.func1();

	ABCD<Person2> n;
	n.func2();
}

int main10()
{
	test101();
	return 0;
}