#include<iostream>
using namespace std;

// �ֱ�������ͨд���Ͷ�̬���������ʵ����������������ļ�������

// ��̬���ŵ㣺
// 1.������֯�ṹ����
// 2.�ɶ���ǿ
// 3.����ǰ�ںͺ��ڵ���չ�Լ�ά��




// ��ͨд��
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
		// �������չ�µĹ��ܣ�����Ҫ�޸�Calculator��Դ����
		// ����ʵ�Ŀ����У��ᳫ����ԭ��
		// ����ԭ�򣺶���չ���п��������޸Ľ��йر�
	}

};

void test291()
{
	// ����һ���������Ķ���
	Calculator c;
	c.m_num1 = 10;
	c.m_num2 = 20;
	cout << c.m_num1 << "+" << c.m_num2 << "=" << c.getResult("+") << endl;
	cout << c.m_num1 << "-" << c.m_num2 << "=" << c.getResult("-") << endl;
	cout << c.m_num1 << "*" << c.m_num2 << "=" << c.getResult("*") << endl;
}

// ���ö�̬ʵ�ּ�����

// ʵ�ּ������ĳ�����
// ����ֻ��ʼ�����Ժ��麯����
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

// �ӷ���������
class Add_Calculator:public Abstrac_Calculator
{
public:
	virtual int getResult()
	{
		return m_num1 + m_num2;
	}
};

// ������������
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
	// ��̬��ʹ������
	// ����ָ�������ָ��������󣡣���
	Abstrac_Calculator* abc = new Add_Calculator;
	abc->m_num1 = 10;
	abc->m_num2 = 30;
	cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getResult() << endl;
	// ָ�����꼴����,��ָ��գ�����
	delete abc;
	abc = NULL;

	//��������
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