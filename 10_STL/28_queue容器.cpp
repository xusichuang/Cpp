#include<iostream>
using namespace std;
#include<queue>

//Queue��һ���Ƚ��ȳ�(First In First Out,FIFO)�����ݽṹ��������������


// ���캯����
// queue<T> que;				//queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
// queue(const queue& que)		//�������캯��

//��ֵ������
// queue& operator=(const queue& que);			// ���صȺ������

// ���ݴ洢��
// push(elem)
// pop()
// front()
// back()

// ��С����
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
	// ��������
	queue<Person> que;

	// ׼������
	Person p1("����", 10);
	Person p2("����", 15);
	Person p3("����", 30);

	que.push(p1);
	que.push(p2);
	que.push(p3);


	// �ж�ֻҪ���в�Ϊ�գ��鿴��ͷ���鿴��λ������
	while (!que.empty())
	{
		cout << "��ͷԪ��������" << que.front().m_name << "��ͷ���䣺��" << que.front().m_age << endl;
		cout << "��βԪ��������" << que.back().m_name << "��β���䣺��" << que.back().m_age << endl;
		que.pop();
	}
	cout << "��ʱ���д�СΪ��" << que.size() << endl;
}

// queue����
int main28()
{
	test281();
	return 0;
}