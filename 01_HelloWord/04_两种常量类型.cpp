#include <iostream>

using namespace std;
 
#define Day 7

// 1. #define 宏常量：   #define 常量名 常量值
// 通常在文件上方定义

//2. const修饰的变量     const  数据类型 = 常量值

int main()
{
	// 不可对常量修改，否则会报错
	cout << "一周总共有：" << Day << "天" << endl;

	const int day = 14;
	day = 10;
	cout << "一周总共有：" << day << "天" << endl;
	return 0;
}
