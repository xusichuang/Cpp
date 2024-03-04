#include<iostream>
using namespace std;

// 在C++中struct和class唯一区别就在于默认的访问权限不同
// struct默认权限为公共
// class默认权限为私有

class C1
{
	int m_A; // 默认权限是私有
};

struct S1
{
	int m_A;  // 默认权限是公共
};

int main04()
{
	C1 c;
	// 访问不到c.m_A

	S1 s;
	s.m_A;
	return 0;
}