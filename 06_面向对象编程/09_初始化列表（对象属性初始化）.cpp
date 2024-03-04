
// 重要！！！
#include<iostream>

using namespace std;
class Person111
{
public:
	int m_A;
	int m_B;
	int m_C;
	

	
	// 传统初始化操作
	Person111(int a, int b,int c)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}
	

	// 初始化列表初始化属性
	Person111(int a,int b,double c) :m_A(a), m_B(b), m_C(c)
	{

	}
	
};

void test0()
{
	Person111 p_example(10, 10, 10);
	cout << "m_A:" << p_example.m_A << endl;
	cout << "m_B:" << p_example.m_B << endl;
	cout << "m_C:" << p_example.m_C << endl;
}

void test01()
{
	Person111 p_example(10, 10, 10.1);
	cout << "m_A:" << p_example.m_A << endl;
	cout << "m_B:" << p_example.m_B << endl;
	cout << "m_C:" << p_example.m_C << endl;
}

int main09()
{
	//test0();
	test01();
	return 0;
}