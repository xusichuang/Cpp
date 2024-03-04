#include<iostream>
using namespace std;

// 模板的通用性不是万能的
template<class T>
void f(T a, T b)
{
	a = b;
}
// 在上述代码中提高的赋值操作，如果传入的a和b是一个数组，就无法实现



template<class T>
bool myCompare(T& a, T& b)
{
	if(a > b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
// 在上述代码中，如果T的数据类型传入的是像Person这样的自定义数据类型，也无法正常运行


// 为了解决这种问题，提供模板的重载，可以为这些特定的类型提供具体化的模板
class Person
{
public:
	// 姓名
	string m_name;
	// 年龄
	int age;

	Person(string name, int age)
	{
		this->m_name = name;
		this->age = age;
	}
};


// 利用具体化Person的版本实现代码，具体化优先调用！！！
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.age > p2.age)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void test061()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a>b" << endl;
	}
	else
	{
		cout << "a<=b" << endl;
	}
}

void test062()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1>p2" << endl;
	}
	else
	{
		cout << "p1<=p2" << endl;
	}
}



int main06()
{
	test061();
	test062();
	return 0;
}