#include<iostream>
using namespace std;

// 分别利用普通写法和多态技术，设计实现两个数进行运算的计算器类

// 多态的优点：
// 1.代码组织结构清晰
// 2.可读性强
// 3.利于前期和后期的扩展以及维护




// 普通写法
class Calculator
{
public:
	int m_num1;
	int m_num2;

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_num1 + m_num2;
		}
		else if (oper == "-")
		{
			return m_num1 - m_num2;
		}
		else if (oper == "*")
		{
			return m_num1 * m_num2;
		}
		// 如果想扩展新的功能，则需要修改Calculator的源代码
		// 在真实的开发中，提倡开闭原则
		// 开闭原则：对扩展进行开发，对修改进行关闭
	}

};

void test291()
{
	// 创建一个计算器的对象
	Calculator c;
	c.m_num1 = 10;
	c.m_num2 = 20;
	cout << c.m_num1 << "+" << c.m_num2 << "=" << c.getResult("+") << endl;
	cout << c.m_num1 << "-" << c.m_num2 << "=" << c.getResult("-") << endl;
	cout << c.m_num1 << "*" << c.m_num2 << "=" << c.getResult("*") << endl;
}

// 利用多态实现计算器

// 实现计算器的抽象类
// 里面只初始化属性和虚函数体
class Abstrac_Calculator
{
public:
	int m_num1;
	int m_num2;
	virtual int getResult()
	{
		return 0;
	}
};

// 加法计算器类
class Add_Calculator:public Abstrac_Calculator
{
public:
	virtual int getResult()
	{
		return m_num1 + m_num2;
	}
};

// 减法计算器类
class Substract_Calculator :public Abstrac_Calculator
{
public:
	virtual int getResult()
	{
		return m_num1 - m_num2;
	}
};

void test292()
{
	// 多态的使用条件
	// 父类指针或引用指向子类对象！！！
	Abstrac_Calculator* abc = new Add_Calculator;
	abc->m_num1 = 10;
	abc->m_num2 = 30;
	cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getResult() << endl;
	// 指针用完即销毁,并指向空！！！
	delete abc;
	abc = NULL;

	//减法运算
	abc = new Substract_Calculator;
	abc->m_num1 = 10;
	abc->m_num2 = 30;
	cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->getResult() << endl;
}

int main29()
{
	test291();
	test292();
	return 0.;
}