#include<iostream>
using namespace std;

// ��̬��Ϊ����
// 1.��̬��̬���������غ�������������ھ�̬��̬�����ú�����
// 2.��̬��̬����������麯��ʵ������ʱ��̬

// ��̬��̬��̬��̬����
// 1.��̬��̬�ĺ�����ַ��� -- ����׶�ȷ��������ַ
// 2.��̬��̬�ĺ�����ַ��� -- ���н׶�ȷ��������ַ


// ��̬��̬Ҫ���������
// 1.�м̳й�ϵ
// 2.������д������麯��

// ��̬��̬ʹ��
// �����ָ���������  ָ��������󣡣���      Animals& animal = cat

class Animals
{
public:
	// �麯����ʵ�ֵ�ַ���!!!
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

class Cat:public Animals
{
public:
	// ��д����������ֵ����  ������  �����б�  ��ȫ��ͬ������    ���ຯ������ֵ����ǰ���virtual���Բ�д
	// ��ð�virtualд�ϣ������������Ķ�
	virtual void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

class Dog :public Animals
{
public:
	virtual void speak()
	{
		cout << "С����˵��" << endl;
	}
};

// ִ��˵���ĺ���
void doSpeak(Animals& animal)
{
	animal.speak();
}

void test281()
{
	Cat cat;
	// ����Сè��˵��
	doSpeak(cat);

	Dog dog;
	// ����С����˵��
	doSpeak(dog);
}

int main28()
{
	test281();
	return 0;
}