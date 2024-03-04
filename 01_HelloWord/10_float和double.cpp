#include<iostream>
using namespace std;

int main10()
{
	// 1.单精度   float
	// 2.双精度   double
	// 
	// 编译器默认将3.14视为双精度，再转成单精度，会多做一步转换,3.14+f则不用进行转换
	float f1 = 3.14f;
	cout << "f1=" << f1 << endl;

	float f2 = 3.1415926;
	cout << "f2=" << f2 << endl;

	// 默认情况下会显示6位有效数字
	double f3 = 3.1415926;
	cout << "f3=" << f3 << endl;

	// 统计float和double占用的内存大小
	cout << "float占用的内存大小" << sizeof(float) << endl;
	cout << "double占用的内存大小" << sizeof(double) << endl;

	// 科学计数法
	float f4 = 3e2;  // 3*10^2
	cout << "f4=" << f4 << endl;
	return 0;
}