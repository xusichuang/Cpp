#include<iostream>

using namespace std;
// �̳еĺô������Լ����ظ��Ĵ���
// �﷨��
// class ������ : public ������             publicΪ�̳з�ʽ
// ���� Ҳ��Ϊ ������
// ���� Ҳ��Ϊ ����

// ��ͨʵ��
/*class java
{
public:
	void header()
	{
		cout << "java��ͷ��" << endl;
	}

	void middle()
	{
		cout << "java���в�" << endl;
	}

	void bottom()
	{
		cout << "java��β��" << endl;
	}
};

class python
{
public:
	void header()
	{
		cout << "python��ͷ��" << endl;
	}

	void middle()
	{
		cout << "python���в�" << endl;
	}

	void bottom()
	{
		cout << "python��β��" << endl;
	}
};*/


// �̳�ʵ��
class Base
{
public:
	void header()
	{
		cout << "ҳ���ͷ���������Ρ���¼ע�ᣩ" << endl;
	}

	void middle()
	{
		cout << "ҳ����в���������Ƶ���ӣ�" << endl;
	}

	void bottom()
	{
		cout << "ҳ���β�����������ġ��绰��" << endl;
	}
};

// java��̳�Base��
class java :public Base
{
public:
	void content()
	{
		cout << "javaѧ����Ƶ" << endl;
	}
};

// python��̳�Base��
class python :public Base
{
public:
	void content()
	{
		cout << "pythonѧ����Ƶ" << endl;
	}
};

void test221()
{
	java j;
	j.header();
	j.middle();
	j.bottom();
	j.content();

	python p;
	p.header();
	p.middle();
	p.bottom();
	p.content();
}

int main22()
{
	test221();
	return 0;
}