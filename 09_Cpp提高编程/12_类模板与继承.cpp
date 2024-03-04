#include<iostream>
using namespace std;

// 当类模板碰到继承时，需要注意一下几点
// 1.当子类继承的父类是一个类模板时，子类在声明时，要指定出父类中T的类型
// 2.如果不指定，编译器无法给子类分配内存
// 3.如果像灵活指定出父类中的T的类型，子类也需要变为类模板

// 类模板
template<class T>
class Base
{
	T m;
};


// class Son :public Base  错误，必须要知道父类中T的类型，才能让子类继承！！！
class Son :public Base<int>
{

};

// 3.如果像灵活指定出父类中的T的类型，子类也需要变为类模板
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	T1 obj;

	Son2()
	{
		cout << "T1的数据类型为：" << typeid(T1).name() << endl;
		cout << "T2的数据类型为：" << typeid(T2).name() << endl;
	}
};
void test121()
{
	Son2<int, char> s;
}

int main12()
{
	test121();
	return 0;
}