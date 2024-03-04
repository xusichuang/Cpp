#include<iostream>
using namespace std;

// 在多态中，通常父类中虚函数的实现是无意义的，主要是调用子类重写的内容
// 因此可以将虚函数改为纯虚函数


// 纯虚函数语法：   virtual 返回值类型 函数名（参数列表）=0;  ！！！
//当类中有了纯虚函数，这个类也称为抽象类


// 抽象类特点：
// 1.无法实例化对象
// 2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类




//纯虚函数和抽象类
class Base
{
public:
	// 纯虚函数
	// 只要有一个纯虚函数，则这个类称为抽象类
	// 抽象类特点：
	// 1.无法实例化对象
	// 2.抽象类的子类必须重写父类中的纯虚函数，否则也属于抽象类
	virtual void func123() = 0;
};

class Son :public Base
{
public:
	virtual void func123()
	{
		cout << "Son类输出" << endl;
	 }
};


void test301()
{
	// Base b;   不能实例化对象
	// new Base
	// 父类指针或引用要指向子类
	Base* b = new Son;
	// 存在问题！！！
	b->func123();
}

int main30()
{
	test301();
	return 0;
}