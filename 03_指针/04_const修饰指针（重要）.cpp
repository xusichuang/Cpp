#include<iostream>
using namespace std;

int main04()
{
	int a = 10;
	int b = 10;
	// 常量指针const int* p
	// 特点：指针的指针指向可以修改，但是指针指向的值不可以更改
	const int* p = &a;
	// *p = 20  错误
	// p = &b   正确

	// 指针常量int * const p
	// 特点：指针的指向不可以该，指针指向的值可以改
	int* const p1 = &a;
	// *p = 20 正确
	// p = &b  错误

	// const既修饰指针，又修饰常量
	// 特点：指针的指向、指针指向的值不可以修改
	const int* const p3 = &a;

	return 0;
}