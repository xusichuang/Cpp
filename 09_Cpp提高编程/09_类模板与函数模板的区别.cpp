#include<iostream>
using namespace std;

// 类模板与函数模板的区别
// 1.类模板没有自动类型推导的使用方式
// 2.类模板在模板参数列表中可以有默认参数


// 类模板
template<class Name_Type,class Age_Type>
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


// 1.类模板没有自动类型推导的使用方式
void test091()
{
	// Person p("张三", 100);  无法自动推导
	Person<string,int> p("张三", 100);
	p.showInfo();
}




// 类模板
template<class Name_Type, class Age_Type=int>
class Person2
{
public:
	Name_Type m_Name;
	Age_Type m_Age;

	Person2(Name_Type name, Age_Type age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showInfo()
	{
		cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
	}

};
// 2.类模板在模板参数列表中可以有默认参数
void test092()
{
	Person2<string> p("李四", 199);
	p.showInfo();
}

int main09()
{
	test091();
	test092();
	return 0;
}