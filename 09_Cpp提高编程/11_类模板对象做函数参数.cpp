#include<iostream>
using namespace std;

// 学习目标：
// 类模板实例化出的对象，像函数传参的方式

// 三种传入方式
// 1.指定传入的类型   ---直接显示对象的数据类型
// 2.参数模板化       ---将对象中的参数变为模板进行传递
// 3.整个类模板化     ---将这个对象类型 模板化进行传递




// 类模板
template<class Name_Type, class Age_Type = int>
class Person
{
public:
	Name_Type m_Name;
	Age_Type m_Age;

	Person(Name_Type name, Age_Type age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showInfo()
	{
		cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
	}

};


// 1.指定传入的类型
void printPerson111(Person<string, int> &p)
{
	p.showInfo();
}
void test111()
{
	Person<string, int> p("张三", 12);
	printPerson111(p);
	
}


// 2.参数模板化
template<class T1,class T2>
void printPerson112(Person<T1, T2>& p)
{
	p.showInfo();
	// 查看数据类型！！！
	cout << "T1的类型为：" << typeid(T1).name() << endl;
	cout << "T1的类型为：" << typeid(T2).name() << endl;
}
void test112()
{
	Person<string, int> p("李四", 18);
	printPerson112(p);
}


// 3.整个类模板化
template<class T>
void printPerson113(T &p)
{
	p.showInfo();
	cout << "T的数据类型为：" << typeid(T).name() << endl;
}
void test113()
{
	Person<string, int> p("王五", 30);
	printPerson113(p);
}


int main11()
{
	test111();
	test112();
	test113();
	return 0;
}