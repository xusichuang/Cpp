#include<iostream>
using namespace std;


// ע�����
// 1.�Զ������Ƶ��������Ƶ���һֱ����������T  �ſ���ʹ�ã�����
template<typename T>    // ����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ�õ���������
void mySwap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

// 2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template<class T>
void func()
{
	cout << "func�ĵ���" << endl;
}

void test021()
{
	int a = 10;
	int b = 20;
	mySwap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}

void test022()
{
	// func();�޷�ֱ�ӵ���,funcʶ�𲻵�T
	func<int>();  //����һ����������,�������ὫT��Ϊint
}

int main02()
{
	test021();
	test022();
	return 0;
}