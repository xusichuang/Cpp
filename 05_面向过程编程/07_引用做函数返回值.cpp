#include<iostream>;
using namespace std;

// 可以作为函数返回值存在的
// 注意：
// 1.不要返回局部变量引用

// 返回局部变量引用
int& test01()
{
	int a = 10;  // 局部变量存放栈区
	return a;
}


// 返回静态变量引用
int& test02()
{
	static int a = 20;  // 静态变量存放全局区
	return a;
}

int main07()
{
	int& ref = test01();
	// 局部变量在调用完后被释放了
	cout << "ref=" << ref << endl;

	int& ref2 = test02();
	cout << "ref2=" << ref2 << endl;

	// 2.函数的调用可以作为左值
	test02() = 1000;
	cout << "ref2=" << ref2 << endl;
	
	return 0;
}