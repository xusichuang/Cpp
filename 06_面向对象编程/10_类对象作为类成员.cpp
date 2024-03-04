#include<iostream>

using namespace std;

// 类中的成员可以是另一个类的对象，称该成员为对象成员
// class A{}
// class B
// {
//		A a;
// }


class Phone
{
public:
	string m_Pname;
	Phone(string pname)
	{
		m_Pname = pname;
		cout << "Person函数的调用" << endl;
	}
};

class Person
{
public:
	// 姓名
	string m_Name;
	// 手机
	Phone m_Phone;

	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person函数的调用" << endl;
	}
};
// 当其它类对象作为本类成员时，先构造类对象（成员），再构造自身

void test0111()
{
	Person p("张三", "iphone");
	cout << p.m_Name << endl;
	cout << p.m_Phone.m_Pname << endl;
}

int main10()
{
	test0111();

	return 0;
}