#include<iostream>
using namespace std;


// ���̣���ˮ->����->���뱭��->���븨��
class AbstractDrinking
{
public:
	// ��ˮ
	virtual void boil() = 0;

	// ����
	virtual void brew() = 0;

	// ���뱭��
	virtual void PourIntoCup() = 0;

	// ���븨��
	virtual void AddSomething() = 0;

	// ������Ʒ
	void make()
	{
		boil();
		brew();
		PourIntoCup();
		AddSomething();
	}
};



// ��������
class Coffe :public AbstractDrinking
{
	// ��ˮ
	virtual void boil()
	{
		cout << "������ˮ" << endl;
	}

	// ����
	virtual void brew()
	{
		cout << "���ݿ���" << endl;
	}

	// ���뱭��
	virtual void PourIntoCup()
	{
		cout << "���뱭��" << endl;
	}

	// ���븨��
	virtual void AddSomething()
	{
		cout << "����ţ�̺���" << endl;
	}
};


// ��
class Tea :public AbstractDrinking
{
	// ��ˮ
	virtual void boil()
	{
		cout << "������ˮ" << endl;
	}

	// ����
	virtual void brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}

	// ���뱭��
	virtual void PourIntoCup()
	{
		cout << "���뱭��" << endl;
	}

	// ���븨��
	virtual void AddSomething()
	{
		cout << "������轺;ջ�" << endl;
	}
};
// ����
void dowork1(AbstractDrinking* abs)
{
	abs->make();
	// new���ٵĶ���Ҫ��ʱ�ͷţ�ָ��ָ��գ�����
	delete abs;
	abs = nullptr;
}
void dowork2(AbstractDrinking& abs)
{
	abs.make();
}

void test311()
{
	// new���ٵĶ���Ҫ��ʱ�ͷţ�ָ��ָ���
	dowork1(new Tea);
	Coffe m;
	// ��������
	dowork2(m);
}

int main31()
{
	test311();
	return 0;
}