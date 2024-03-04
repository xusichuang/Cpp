#include<iostream>
using namespace std;

// C++中空指针课上可以调用成员函数的，但是要注意有没有用到this指针
// 如果用到this指针，需要加以判断保证代码的健壮性


class Person
{
public:

	int m_Age;

	void showClassName()
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{
		// 怕传递空指针导致代码崩溃
		if (this == nullptr)
		{
			return;
		}
		// this->m_Age 和 m_Age是等价的
		cout << "age=" << this->m_Age << endl;
	}
};

void test015()
{
	Person* p = NULL;
	p->showClassName();
	
	
	p->showPersonAge();   //会崩溃
	// 空指针p   其中的this->指向一个空的值


}


int main015()
{
	test015();
	return 0;
}