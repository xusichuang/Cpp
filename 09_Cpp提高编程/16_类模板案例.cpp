#include<iostream>
using namespace std;

//����������ʵ��һ��ͨ�õ�������
//Ҫ�����£�
//1.���Զ��������������Լ��Զ����������͵����ݽ��д洢
//2.�������е����ݴ洢������
//3.���캯���п��Դ������������
//4.�ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
//5.�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//6.����ͨ���±�ķ�ʽ���������е�Ԫ��
//7.���Ի�ȡ�����е�ǰԪ�ظ��������������

#include "myArray.hpp"

void printArray(MyArray<int> &arr)
{
	for (int i = 0; i < arr.get_Size(); i++)
	{
		cout << arr[i] <<" ";
	}
	cout << endl;
}

void test161()
{
	MyArray<int> arr1(5);
	

	for (int i = 0; i < 5; i++)
	{
		// ����β�巨�������в�������
		arr1.Push_Back(i);
	}

	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
	printArray(arr1);

	cout << "arr1������Ϊ��" << arr1.get_Capacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.get_Size() << endl;

	// ���arr1����������hpp�ļ�
	MyArray<int> arr2(arr1);
	// βɾ��
	
	arr2.Pop_Back();
	cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;
	printArray(arr2);
	cout << "arr2������Ϊ��" << arr2.get_Capacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.get_Size() << endl;

}



// �����Զ�����������
class Person
{
public:
	string m_Name;
	int m_Age;


	// �޲ι��죨������Ĭ�Ϲ��죩
	Person()
	{

	}

	// �вι���
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
};

void printPersonArr(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.get_Size(); i++)
	{
		cout << "������" << arr[i].m_Name << "���䣺" << arr[i].m_Age << endl;
	}
}

void test162()
{
	MyArray<Person> arr(10);
	Person p1("����",14);
	Person p2("����", 16);
	Person p3("����", 19);
	Person p4("����", 24);
	Person p5("�", 35);


	// �����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	// ��ӡ��������
	printPersonArr(arr);

	// �����������
	cout << "arr����Ϊ��" << arr.get_Capacity() << endl;

	// ��������С
	cout << "arr�����СΪ��" << arr.get_Size() << endl;
}

int main16()
{
	test161();
	test162();
	return 0;
}