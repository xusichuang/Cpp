#include<iostream>

using namespace std;
// 继承的好处：可以减少重复的代码
// 语法：
// class 子类名 : public 父类名             public为继承方式
// 子类 也称为 派生类
// 父类 也称为 基类

// 普通实现
/*class java
{
public:
	void header()
	{
		cout << "java的头部" << endl;
	}

	void middle()
	{
		cout << "java的中部" << endl;
	}

	void bottom()
	{
		cout << "java的尾部" << endl;
	}
};

class python
{
public:
	void header()
	{
		cout << "python的头部" << endl;
	}

	void middle()
	{
		cout << "python的中部" << endl;
	}

	void bottom()
	{
		cout << "python的尾部" << endl;
	}
};*/


// 继承实现
class Base
{
public:
	void header()
	{
		cout << "页面的头部（公开课、登录注册）" << endl;
	}

	void middle()
	{
		cout << "页面的中部（具体视频链接）" << endl;
	}

	void bottom()
	{
		cout << "页面的尾部（帮助中心、电话）" << endl;
	}
};

// java类继承Base类
class java :public Base
{
public:
	void content()
	{
		cout << "java学科视频" << endl;
	}
};

// python类继承Base类
class python :public Base
{
public:
	void content()
	{
		cout << "python学科视频" << endl;
	}
};

void test221()
{
	java j;
	j.header();
	j.middle();
	j.bottom();
	j.content();

	python p;
	p.header();
	p.middle();
	p.bottom();
	p.content();
}

int main22()
{
	test221();
	return 0;
}