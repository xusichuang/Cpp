#include<iostream>
using namespace std;

// ����ģ�������̳�ʱ����Ҫע��һ�¼���
// 1.������̳еĸ�����һ����ģ��ʱ������������ʱ��Ҫָ����������T������
// 2.�����ָ�����������޷�����������ڴ�
// 3.��������ָ���������е�T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��

// ��ģ��
template<class T>
class Base
{
	T m;
};


// class Son :public Base  ���󣬱���Ҫ֪��������T�����ͣ�����������̳У�����
class Son :public Base<int>
{

};

// 3.��������ָ���������е�T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	T1 obj;

	Son2()
	{
		cout << "T1����������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2����������Ϊ��" << typeid(T2).name() << endl;
	}
};
void test121()
{
	Son2<int, char> s;
}

int main12()
{
	test121();
	return 0;
}