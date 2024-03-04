#include<iostream>
using namespace std;
#include<stack>


// stack基本概念
// stack是一种现金后出（First In Last Out)的数据结构，只有一个出口


// 构造函数：
// stack<T> stk;				//stack采用模板类实现，stack对象的默认构造形式
// stack(const stack& stk)		//拷贝构造函数


// 赋值操作：
// stack& operator=(const stack& stk);		//重载等号操作符

// 数据存储：
// push(elem)
// pop()
// top()

// 大小操作
// empty()
// size()

void test271()
{
	stack<int> stk;
	for (int i = 0; i < 5; i++)
	{
		// 入栈
		stk.push(i * 10);
	}

	while (!stk.empty())
	{
		cout << "栈顶的元素为：" << stk.top() << endl;
		stk.pop();
	}
}

int main27()
{
	test271();
	return 0;
}