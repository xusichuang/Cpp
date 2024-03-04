#include<iostream>

using namespace std;

// 成员属性设置为私有
// 优点1：将所有成员属性设置为私有，可以自己控制读写权限
// 优点2：对于写权限，我们可以检测数据的有效性


// 总结
// 私有属性不可在类外被直接访问可以通过类函数传入参数间接访问和修改私有属性

class Person123
{
private:
	// 姓名  可读可写
	string m_Name;
	// 年龄 只读
	int m_Age;

public:
	void setName(string name)
	{
		m_Name = name;
	}

	string getName()
	{
		return m_Name;
	}

	int getAge()
	{
		m_Age = 15;
		return m_Age;
	}
};

int main05()
{
	Person123 p5;
	p5.setName("张三");
	string s = p5.getName();
	int age = p5.getAge();
	cout << "姓名为：" << s << endl;
	cout << "年龄为：" << age << endl;
	return 0;
}