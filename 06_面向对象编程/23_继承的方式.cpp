#include<iostream>

using namespace std;
// 继承语法：
// class 子类名: 继承方式 父类名
// 继承方式：公有继承、保护继承、私有继承

// 看图片理解


class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
// 公共继承
class Son1 :public Base
{
public:
	void func()
	{
		// 父类中的公共权限成员 到 子类中依然是公共权限
		m_A = 10;
		// 父类中的保护权限成员 到 子类中依然是保护权限
		m_B = 20;  //保护权限类外访问不到

		// m_C = 30  父类中的私有权限成员，三种继承方式均不可以访问！！！
	}
	void p()
	{
		cout << m_B << endl;
	}

public:
	int m_D;
};


// 保护继承
class Son2 :protected Base
{
public:
	void func()
	{
		// 父类中的保护权限成员 到 子类中变成保护权限！！！
		m_A = 100;
		m_B = 200;

		// m_C = 30  父类中的私有权限成员，三种继承方式均不可以访问！！！
	}

	
};

// 私有继承
class Son3 :private Base
{
	void func()
	{
		// 父类中的保护权限成员 到 子类中变成私有权限！！！
		m_A = 1000;
		m_B = 2000;
	}
};

void test231()
{
	Son1 son1;
	son1.func();
	cout << son1.m_A << endl;
	// son1.m_B 变成保护权限，类外访问不到，只能在类内访问
	son1.p();
}

int main23()
{
	test231();
	return 0;
}