#include<iostream>
using namespace std;
#include<list>
#include<string>


// 将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
// 排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序

class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	// string类型必须放在前面否则无法读取数据，有权限限制！！！(VS出现bug了）
	string m_Name;
	int m_Age;
	int m_Height;

	


};

// 排序规则！！！
bool ComparePerson(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		// 年龄相同按照身高降序
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}

}

void test352()
{
	list<Person> L;

	// 准备数据
	Person p1("张三", 15, 160);
	Person p2("李四", 29, 200);
	Person p3("王五", 30, 300);
	Person p4("郑飒", 15, 166);

	// 插入数据
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);

	cout << "排序前：" << endl;
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << "  年龄：" << it->m_Age << "  身高：" << it->m_Height << endl;
	}
	cout << "-----------------------------" << endl;
	cout << "排序后：" << endl;
	L.sort(ComparePerson);
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << "  年龄：" << it->m_Age << "  身高：" << it->m_Height << endl;
	}
	

	
}


int main35()
{
	test352();
	return 0;
}
