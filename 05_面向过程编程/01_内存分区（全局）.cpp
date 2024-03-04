#include<iostream>
using namespace std;


// 代码区：存放函数体的二进制代码，由操作系统 进行管理的
// 全局区：存放全局变量和静态变量以及常量
// 栈区：由编译器自动分配，存放函数的参数值，局部变量等；
// 堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收

// 内存四区意义：
// 不同区域存放的数据，赋予不同的生命周期


// 代码区
// 代码区存放CPU执行的指令，代码区是共享的、且是只读的
// 例如打开exe文件



// 全局区
// 全局变量和静态变量存放在此
// 全局区还包括常量区，字符串常量和其他常量
// 该区域的数据在程序结束后由操作系统释放



// 全局变量
int g_a = 10;
int g_b = 10;

// const修饰的全局变量(全局常量)
const int c_g_a = 10;
const int c_g_b = 10;

int main01()
{
	// 全局区

	// 全局变量、静态变量、常量

	// 创建普通局部变量（写在函数体的变量都是局部变量）
	int a = 10;
	int b = 10;
	cout << "局部变量a的地址：" << (int)&a << endl;
	cout << "局部变量b的地址：" << (int)&b << endl;

	cout << "全局变量g_a的地址：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址：" << (int)&g_b << endl;

	// 静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址：" << (int)&s_b << endl;

	// 常量
	// 字符串常量
	string c = "hello word";
	cout << "字符串常量c的地址：" << (int)&c << endl;

	// const修饰的全局变量（全局常量）
	cout << "全局常量c_g_a的地址：" << (int)&c_g_a << endl;
	cout << "全局常量c_g_b的地址：" << (int)&c_g_b << endl;
	
	// const修饰的局部变量（局部常量）
	const int c_l_a = 10;
	cout << "局部常量c_l_a的地址：" << (int)&c_l_a << endl;
	return 0;
}