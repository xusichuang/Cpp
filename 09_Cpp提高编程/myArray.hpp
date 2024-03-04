#pragma once

#include<iostream>
using namespace std;

// �Լ�ͨ�õ�������
template<class T>
class MyArray
{
private:
	// ָ��ָ��������ٵ���ʵ����
	T* pAddress;

	// ��������
	int m_Capacity;
	// �����С
	int m_Size;


public:
	// �вι���
	MyArray(int capacity)
	{
		// cout << "MyArray�вι������" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];

	}

	// ��������
	MyArray(const MyArray& arr)
	{
		// cout << "MyArray�����������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		// ǳ������ָ��ָ��ͬһ��λ��
		// this->pAddress = arr.pAddress;

		// ������ڶ��������µĿռ�
		this->pAddress = new T[arr.m_Capacity];

		// ��arr�е����ݶ���������
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	// operator=  ��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		// cout << "MyArray  operator=����" << endl;
		// ���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pAddress != nullptr)
		{
			delete[] this->pAddress;
			this->pAddress = nullptr;

			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		// ���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	// β�巨
	template<class T>
	void Push_Back(const T& value)
	{
		// �ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
		{
			cout << "��������" << endl;
			return;
		}
		// ����ĩβ��������
		this->pAddress[this->m_Size] = value;
		// ���������С
		this->m_Size++;
	}

	// βɾ��
	void Pop_Back()
	{
		// ���û����ʲ������һ��Ԫ�أ���Ϊβɾ��
		if (this->m_Size == 0)
		{
			cout << "����Ϊ��" << endl;
			return;
		}
		this->m_Size--;
	}

	// ͨ���±���������е�Ԫ��
	// �����ﵽarr[0]=100��Ч���������&
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	// �������������
	int get_Capacity()
	{
		return this->m_Capacity;
	}

	// ���������С
	int get_Size()
	{
		return this->m_Size;
	}

	//��������
	~MyArray()
	{
		// cout << "MyArray  ������������" << endl;
		if (this->pAddress != nullptr)
		{
			delete[] this->pAddress;
			this->pAddress = nullptr;
		}
	}
};
