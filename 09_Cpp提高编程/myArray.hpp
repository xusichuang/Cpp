#pragma once

#include<iostream>
using namespace std;

// 自己通用的数组类
template<class T>
class MyArray
{
private:
	// 指针指向堆区开辟的真实数组
	T* pAddress;

	// 数组容量
	int m_Capacity;
	// 数组大小
	int m_Size;


public:
	// 有参构造
	MyArray(int capacity)
	{
		// cout << "MyArray有参构造调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];

	}

	// 拷贝构造
	MyArray(const MyArray& arr)
	{
		// cout << "MyArray拷贝构造调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		// 浅拷贝：指针指向同一个位置
		// this->pAddress = arr.pAddress;

		// 深拷贝，在堆区开辟新的空间
		this->pAddress = new T[arr.m_Capacity];

		// 将arr中的数据都拷贝过来
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	// operator=  防止浅拷贝问题
	MyArray& operator=(const MyArray& arr)
	{
		// cout << "MyArray  operator=调用" << endl;
		// 先判断原来堆区是否有数据，如果有先释放
		if (this->pAddress != nullptr)
		{
			delete[] this->pAddress;
			this->pAddress = nullptr;

			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		// 深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	// 尾插法
	template<class T>
	void Push_Back(const T& value)
	{
		// 判断容量是否等于大小
		if (this->m_Capacity == this->m_Size)
		{
			cout << "容量已满" << endl;
			return;
		}
		// 数组末尾插入数据
		this->pAddress[this->m_Size] = value;
		// 更新数组大小
		this->m_Size++;
	}

	// 尾删法
	void Pop_Back()
	{
		// 让用户访问不到最后一个元素，即为尾删法
		if (this->m_Size == 0)
		{
			cout << "数组为空" << endl;
			return;
		}
		this->m_Size--;
	}

	// 通过下标访问数组中的元素
	// 如果想达到arr[0]=100的效果，必须加&
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	// 返回数组的容量
	int get_Capacity()
	{
		return this->m_Capacity;
	}

	// 返回数组大小
	int get_Size()
	{
		return this->m_Size;
	}

	//析构函数
	~MyArray()
	{
		// cout << "MyArray  析构函数调用" << endl;
		if (this->pAddress != nullptr)
		{
			delete[] this->pAddress;
			this->pAddress = nullptr;
		}
	}
};
