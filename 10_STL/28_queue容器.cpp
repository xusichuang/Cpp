#include<iostream>
using namespace std;
#include<queue>

//Queue是一种先进先出(First In First Out,FIFO)的数据结构，它有两个出口


// 构造函数：
// queue<T> que;				//queue采用模板类实现，queue对象的默认构造形式
// queue(const queue& que)		//拷贝构造函数

//赋值操作：
// queue& operator=(const queue& que);			// 重载等号运算符

// 数据存储：
// push(elem)
// pop()
// front()
// back()

// 大小操作
// empty()
// size()

class Person
{
public:
	string m_name;
	int m_age;

	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
};

void test281()
{
	// 创建队列
	queue<Person> que;

	// 准备数据
	Person p1("张三", 10);
	Person p2("李四", 15);
	Person p3("王五", 30);

	que.push(p1);
	que.push(p2);
	que.push(p3);


	// 判断只要队列不为空，查看队头，查看对位，出队
	while (!que.empty())
	{
		cout << "队头元素姓名：" << que.front().m_name << "队头年龄：：" << que.front().m_age << endl;
		cout << "队尾元素姓名：" << que.back().m_name << "队尾年龄：：" << que.back().m_age << endl;
		que.pop();
	}
	cout << "此时队列大小为：" << que.size() << endl;
}

// queue容器
int main28()
{
	test281();
	return 0;
}