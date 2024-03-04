#include<iostream>
using namespace std;

// 菱形继承概念：
// 两个派生类继承同一个基类
// 又有某个类同时继承两个派生类
// 这种继承称为菱形继承，或者钻石继承

// 菱形继承问题
// 1.羊继承了动物的数据，驼同样继承了动物的数据，草泥马继承了羊和驼的数据，当草泥马使用数据时，就会产生二义性
// 2.草泥马继承自动物的数据继承了两份，实际只需要一份数据即可
class Animals
{
public:
	int m_Age;
};

// 利用虚继承，解决菱形继承的问题！！！
// 继承之前  加上  关键字virtual  变成虚继承！！！
// Animals类 称为虚基类
// 羊类
class Sheep :virtual public Animals
{

};
//驼类
class Tuo:virtual public Animals
{

};
//羊驼类
class SheepTuo :public Sheep, public Tuo
{

};

void test271()
{
	SheepTuo st;
	// st.m_Age = 18;   不明确
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 20;
	// 菱形继承，两个父类拥有相同的属性，需要加以作用域区分
	cout << "Sheep::m_Age=" << st.Sheep::m_Age << endl;
	cout << "Tuo::m_Age=" << st.Tuo::m_Age << endl;

	// 菱形继承导致数据有两份，浪费资源，这份数据只要有一份即可！！！
	// 加上virtual即可用st.m_Age
	cout << "st.m_Age =" << st.m_Age << endl;

	// 进入文件对应目录cd C:\Users\15310\Desktop\C++\06_面向对象编程
	// 查看SheepTuo类的信息
	// cl /d1 reportSingleClassLayoutSheepTuo 27_菱形继承.cpp
}

int main27()
{
	test271();
	return 0;
}