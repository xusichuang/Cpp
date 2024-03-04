#include<iostream>

using namespace std;


// 构造函数：对象的初始化
// 析构函数：对象的清理
// 这两个函数将会被编译器自动调用，完成对象初始化和清理工作
// 编译器提供的构造函数和析构函数是空实现


class Person123
{
public:
	// 1.构造函数
	// 没有返回值，不用写void
	// 函数名 与 类名相同
	// 构造函数可以有参数，可以发生重载
	// 创建对象的到时候，构造函数会自动调用，而且只调用一次
	Person123()
	{
		cout << "Person 构造函数的调用" << endl;
	}

	// 2.析构函数  进行清理的操作
	// 没有返回值，不用写void
	// 函数名与类名相同 在名称前面加~
	// 析构函数不可以有参数的，不可以发生重载
	// 对象在销毁前 会调用析构函数，而且只会调用一次
	~Person123()
	{
		cout << "Person 析构函数的调用" << endl;
	}

};

void test0000()
{
	Person123 pm;
}

int main08()
{
	test0000();
	//Person123 pm;
	system("pause");
	return 0;
}
