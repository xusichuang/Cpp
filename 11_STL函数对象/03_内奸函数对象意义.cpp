/*
���
	STL�ڽ���һЩ��������

���ࣺ
	�����º���
	��ϵ�º���
	�߼��º���

�÷���
	��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ
	ʹ���ڽ�����������Ҫ����ͷ�ļ� #include<functional>


�����º���
���ܣ�
	ʵ����������
	����negate��ҽԺ���㣬���඼�Ƕ�Ԫ����
�º���ԭ�ͣ�
	template<class T> T plus<T>					// �ӷ��º���
	template<class T> T minus<T>				// �����º���
	template<class T> T multiplies<T>			// �˷��º���
	template<class T> T divides<T>				// �����º���
	template<class T> T modulus<T>				// ȡģ�º���
	template<class T> T negate<T>				// ȡ���º���     10 -> -10
*/

#include<iostream>
#include<functional>
using namespace std;

void test031()
{
	negate<int> n;
	cout << n(50) << endl;
}

void test032()
{
	plus<int> pl;
	cout << pl(10, 20) << endl;;
}

int main03()
{
	test031();
	test032();
	return 0;
}