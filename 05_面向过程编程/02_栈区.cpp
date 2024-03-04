#include<iostream>
using namespace std;

// 栈区的注意事项：不要返回局部变量的地址！！！
// 栈区的数据由编译器管理开辟和释放



int* func(int b) //形参也会放在栈区
{
	// 局部变量存放在栈区，栈区的数据在函数执行完自动释放
	int a = 10;

	b = 100;
	return &a;
}




int main02()
{
	int* p = func(1);
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	return 0;
}