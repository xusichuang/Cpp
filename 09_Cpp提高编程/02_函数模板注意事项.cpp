#include<iostream>
using namespace std;


// 注意事项：
// 1.自动类型推导，必须推导出一直的数据类型T  才可以使用！！！
template<typename T>    // 声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用的数据类型
void mySwap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

// 2.模板必须要确定出T的数据类型，才可以使用
template<class T>
void func()
{
	cout << "func的调用" << endl;
}

void test021()
{
	int a = 10;
	int b = 20;
	mySwap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}

void test022()
{
	// func();无法直接调用,func识别不到T
	func<int>();  //随便给一个数据类型,编译器会将T视为int
}

int main02()
{
	test021();
	test022();
	return 0;
}