#include<iostream>
using namespace std;

// C++�п�ָ����Ͽ��Ե��ó�Ա�����ģ�����Ҫע����û���õ�thisָ��
// ����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��


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
		// �´��ݿ�ָ�뵼�´������
		if (this == nullptr)
		{
			return;
		}
		// this->m_Age �� m_Age�ǵȼ۵�
		cout << "age=" << this->m_Age << endl;
	}
};

void test015()
{
	Person* p = NULL;
	p->showClassName();
	
	
	p->showPersonAge();   //�����
	// ��ָ��p   ���е�this->ָ��һ���յ�ֵ


}


int main015()
{
	test015();
	return 0;
}