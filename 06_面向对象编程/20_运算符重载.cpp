#include<iostream>
using namespace std;


// 运算符重载：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型


// 实现加号运算符重载

class Person20
{
public:
	int m_A;
	int m_B;
	// 1.通过成员函数重载+号
	/*Person20 operator+(Person20& p)
	{
		Person20 tmp;
		tmp.m_A = this->m_A + p.m_A;
		tmp.m_B = this->m_B + p.m_B;
		// 必须返回一个值，否则会报错
		return tmp;
	}*/
};

// 2.全局函数重载+号
Person20 operator+(Person20& p1, Person20& p2)
{
	Person20 tmp;
	tmp.m_A = p1.m_A + p2.m_A;
	tmp.m_B = p1.m_B + p2.m_B;
	return tmp;
}

// 函数重载的版本
Person20 operator+(Person20& p1, int num)
{
	Person20 tmp;
	tmp.m_A = p1.m_A + num;
	tmp.m_B = p1.m_B + num;
	return tmp;
}

void test021()
{
	Person20 p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person20 p2;
	p2.m_A = 20;
	p2.m_B = 30;
	// 必须定义成员函数operator+，否则会报错
	// 指针实现operator成员函数则：Person p3 = p1 + &p2
	Person20 p3 = p1 + p2;

	// 成员函数的本质调用
	// Person20 p3 = p1.operator+(p2);

	// 全局函数的本质调用
	Person20 p4 = operator+(p1, p2);
	cout << p4.m_A << endl;
	cout << p4.m_B << endl;

	Person20 p5 = p1 + 100;
	cout << p5.m_A << endl;
	cout << p5.m_B << endl;
}


// 总结：
// 1.对于内置的数据类型的表达式的运算符是不可能改变的
// 2.不要滥用运算符重载


int main20()
{
	test021();
	return 0;
}