#include<iostream>
using namespace std;
#include<stack>


// stack��������
// stack��һ���ֽ�����First In Last Out)�����ݽṹ��ֻ��һ������


// ���캯����
// stack<T> stk;				//stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ�����ʽ
// stack(const stack& stk)		//�������캯��


// ��ֵ������
// stack& operator=(const stack& stk);		//���صȺŲ�����

// ���ݴ洢��
// push(elem)
// pop()
// top()

// ��С����
// empty()
// size()

void test271()
{
	stack<int> stk;
	for (int i = 0; i < 5; i++)
	{
		// ��ջ
		stk.push(i * 10);
	}

	while (!stk.empty())
	{
		cout << "ջ����Ԫ��Ϊ��" << stk.top() << endl;
		stk.pop();
	}
}

int main27()
{
	test271();
	return 0;
}