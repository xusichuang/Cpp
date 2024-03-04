#include<iostream>
using namespace std;

// 多态分为两类
// 1.静态多态：函数重载和运算符重载属于静态多态，复用函数名
// 2.动态多态：派生类和虚函数实现运行时多态

// 静态多态域动态多态区别
// 1.静态多态的函数地址早绑定 -- 编译阶段确定函数地址
// 2.动态多态的函数地址晚绑定 -- 运行阶段确定函数地址


// 动态多态要满足的条件
// 1.有继承关系
// 2.子类重写父类的虚函数

// 动态多态使用
// 父类的指针或者引用  指向子类对象！！！      Animals& animal = cat

class Animals
{
public:
	// 虚函数：实现地址晚绑定!!!
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

class Cat:public Animals
{
public:
	// 重写：函数返回值类型  函数名  参数列表  完全相同！！！    子类函数返回值类型前面的virtual可以不写
	// 最好把virtual写上，便于其他人阅读
	virtual void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

class Dog :public Animals
{
public:
	virtual void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

// 执行说话的函数
void doSpeak(Animals& animal)
{
	animal.speak();
}

void test281()
{
	Cat cat;
	// 调用小猫在说话
	doSpeak(cat);

	Dog dog;
	// 调用小狗在说话
	doSpeak(dog);
}

int main28()
{
	test281();
	return 0;
}