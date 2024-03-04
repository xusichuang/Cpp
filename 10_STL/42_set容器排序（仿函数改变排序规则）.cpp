#include<iostream>
using namespace std;
#include<set>

// set容器默认排序规则为从小到大，掌握如何改变排序规则

// 主要技术点：
// 利用放函数，可与改变排序规则！！！


// 仿函数
class MyCompare
{
public:
	// 第一个（）表示重载的符号，第二个（）表示参数列表    后面必须要加const！！！
	bool operator()(int v1,int v2) const
	{
		return v1 > v2;
	}
};

// set存放内置数据类型
void test421()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(5);
	s1.insert(30);
	s1.insert(40);

	for (set<int>::const_iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	// 指定排序规则（从大到小）
	set<int, MyCompare> s2;
	s2.insert(10);
	s2.insert(20);
	s2.insert(5);
	s2.insert(30);
	s2.insert(40);
	for (set<int,MyCompare>::const_iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

class Person
{
public:
	string m_Name;
	int m_Age;
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
};


//自定义数据类型必须指定排序规则，否则会报错
class ComparePerson
{
public:
	bool operator()(const Person &p1,const Person &p2) const
	{
		return p1.m_Age > p2.m_Age;
	}
};


// set存放自定义数据类型
void test422()
{
	Person p1("张三", 52);
	Person p2("李四", 45);
	Person p3("李丹", 23);

	set<Person,ComparePerson> s;
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	for (set<Person,ComparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << it->m_Name << "  年龄：" << it->m_Age << endl;
	}
}




int main42()
{
	test421();
	test422();
	return 0;
}