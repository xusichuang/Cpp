#include<iostream>
using namespace std;

#include<vector>

class Person
{
public:
	string m_Name;
	int m_Age;

	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
};
// 存放自定义数据
void test031()
{
	vector<Person> v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	// 向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	// 遍历容器中的数据
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << "年龄：" << (*it).m_Age << endl;
		// it为指针
		cout << "姓名：" << it->m_Name << "年龄：" << it->m_Age << endl;
	}
}

// 存放自定义数据类型   指针
void test032()
{
	// 注意*
	vector<Person*> v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	// 向容器中添加数据   注意&
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	// it为指针的地址
	// *it为指针
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it)->m_Name << "年龄：" << (*it)->m_Age << endl;
	}
}

int main03()
{
	test031();
	cout << "-------------------------------------------------------------" << endl;
	test032();
	return 0;
}