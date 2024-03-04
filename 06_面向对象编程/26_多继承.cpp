#include<iostream>
using namespace std;

// C++允许一个类继承多个类
// 语法：class 子类名：继承方式（public,protected,private) 父类名1，继承方式（public,protected,private)父类名2......继承方式（public,protected,private)父类名n

// 多继承困难会引发父类中有同名成员出现，则需要加作用域来区分

//注意：不建议多继承
// 父类1
class Base1
{
public:
	int m_A;
	int m_F=700;
	Base1()
	{
		m_A = 100;

	}
};
// 父类2
class Base2
{
public:
	int m_B;
	int m_F=820;
	Base2()
	{
		m_B = 200;
		
	}
private:
	// 会被继承，但是不能被访问！！！
	int m_Z = 0;
};

class Son :public Base1,public Base2
{
public:
	int m_C;
	int m_D;
	Son()
	{
		m_C = 300;
		m_D = 400;
	}
};

void test261()
{
	Son s;
	cout << "s  sizeof=" << sizeof(s) << endl;
	// 当父类中出现同名成员，需要加作用域区分
	cout << "Base1 下的m_F = " << s.Base1::m_F << endl;
	cout << "Base2 下的m_F = " << s.Base2::m_F << endl;

}

int main26()
{
	test261();
	return 0;
}