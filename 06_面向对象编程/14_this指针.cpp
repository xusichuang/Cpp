#include<iostream>

using namespace std;
// ÿһ���Ǿ�̬��Ա����ֻ������һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ���ṫ��һ�����
// ��ô��������ĸ���������Լ����أ�

// C++ͨ���ṩ����Ķ���ָ�룺thisָ�룬����������⣬thisָ��ָ�򱻵��õĳ�Ա���������Ķ��󣡣���
// thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
// thisָ�벻��Ҫ���壬ֱ��ʹ�ü���


// ��;��
// 1.���βκͳ�Ա����ͬ��ʱ������thisָ��������
// 2.����ķǾ�̬��Ա�����з��ض�������ʹ��return *this



class Person
{
public:
	int age;
	Person(int age)
	{
		// thisָ��ָ�򱻵��ó�Ա���������Ķ���
		this->age = age;
	}

	void PersonAdd(Person& p)
	{
		this->age += p.age;
	}
};

class Person123
{
public:
	int age;
	Person123(int age)
	{
		// thisָ��ָ�򱻵��ó�Ա���������Ķ���
		this->age = age;
	}


	// �����������÷��ţ����򲻻��޸�ԭ����ֵ!!!
	Person123& PersonAdd(Person123& p)
	{
		this->age += p.age;
		return *this;
	}
};


void test014()
{
	Person p1(18);
	cout << "p1������Ϊ" << p1.age << endl;
}

void test0141()
{
	Person p1(10);
	Person p2(10);
	p2.PersonAdd(p1);
	cout << "p2������Ϊ" << p2.age << endl;

	Person123 p3(10);
	Person123 p4(20);
	Person123 p5(10);
	// ��ʽ���˼��
	p5.PersonAdd(p4).PersonAdd(p3);
	cout << "p5 ������Ϊ" << p5.age << endl;
}

int main14()
{
	test014();
	test0141();
	return 0;
}