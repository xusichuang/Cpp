#include<iostream>
using namespace std;
#include<list>

// list��������
// ���ܣ������ݽ�����ʽ�洢
// ����(list)��һ������洢��Ԫ�Ϸ������Ĵ洢�ṹ������Ԫ�ص��߼�˳����ͨ�������е�ָ��������ʵ�ֵ�

// �������ɣ�������һϵ�н�����
// ������ɣ�һ���洢����Ԫ�ص���������һ���Ǵ洢��һ������ַ��ָ����

// STL��������һ��˫��ѭ������
// ��������Ĵ洢��ʽ�������������ڴ�ռ䣬�������list�ĵ�����֧��ǰ�ƺͺ��ƣ�����˫�������

// list���ŵ㣺
// ���ö�̬�洢���䣬��������ڴ��˷Ѻ����
// ����ָ������ɾ������ʮ�ַ��㣬�޸�ָ�뼴�ɣ�����Ҫ�ƶ�����Ԫ��

// list��ȱ�㣺
// ���������ǿռ䣨ָ���򣩺�ʱ�䣨����������ķѽϴ�

// list��һ����Ҫ�����ʣ������ɾ���������������ԭ��list��������ʧЧ������vector�ǲ�������



// ����ԭ��
// list<T> lst;				//list����ģ����ʵ�ֶ����Ĭ�Ϲ���
// list(beg,end)			//���캯����[beg,end)�����Ԫ�ؿ���������
// list(n,elem)				//���캯����n��elem����������
// list(const list& lst)	//�������캯��


void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test291()
{
	//����list����
	list<int> L1;   // Ĭ�Ϲ���

	// �������
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);

	// ��������
	printList(L1);

	// ���䷽ʽ����
	list<int>L2(L1.begin(), L1.end());
	printList(L2);

	// ��������
	list<int>L3(L2);
	printList(L3);

	// n��elem
	list<int>L4(4, 100);
	printList(L4);
}


int main29()
{
	test291();
	return 0;
}