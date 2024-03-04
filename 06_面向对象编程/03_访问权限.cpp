#include<iostream>
using namespace std;

// 访问权限
// 1.公共权限public          成员  类内可以访问,类外可以访问
// 2.保护权限protected       成员  类内可以访问,类外不可以访问      儿子可以访问父亲中保护的内容
// 3.私有权限private		 成员  类内可以访问,类外不可以访问		儿子不可以访问父亲的私有内容

//2和3主要是在继承上不同

class Person
{
public:
	// 公共权限
	string m_Name;

protected:
	// 保护权限
	string m_Car;

private:
	int m_Password;

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 159123;
	}
};

int main03()
{   
	Person p1;
	p1.m_Name = "李四";
	// p1.m_Car = "奔驰”
	// p1.m_password = 123456   
	// 保护权限和私有权限内容，类外访问不到

	return 0;
}