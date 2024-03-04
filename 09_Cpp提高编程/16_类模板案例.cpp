#include<iostream>
using namespace std;

//案例描述：实现一个通用的数组类
//要求如下：
//1.可以对内置数据类型以及自定义数据类型的数据进行存储
//2.将数组中的数据存储到堆区
//3.构造函数中可以传入数组的容量
//4.提供对应的拷贝构造函数以及operator=防止浅拷贝问题
//5.提供尾插法和尾删法对数据中的数据进行增加和删除
//6.可以通过下标的方式访问数组中的元素
//7.可以获取数组中当前元素个数和数组的容量

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
		// 利用尾插法向数组中插入数据
		arr1.Push_Back(i);
	}

	cout << "arr1的打印输出为：" << endl;
	printArray(arr1);

	cout << "arr1的容量为：" << arr1.get_Capacity() << endl;
	cout << "arr1的大小为：" << arr1.get_Size() << endl;

	// 深拷贝arr1，深拷贝代码见hpp文件
	MyArray<int> arr2(arr1);
	// 尾删法
	
	arr2.Pop_Back();
	cout << "arr2的打印输出为：" << endl;
	printArray(arr2);
	cout << "arr2的容量为：" << arr2.get_Capacity() << endl;
	cout << "arr2的大小为：" << arr2.get_Size() << endl;

}



// 测试自定义数据类型
class Person
{
public:
	string m_Name;
	int m_Age;


	// 无参构造（编译器默认构造）
	Person()
	{

	}

	// 有参构造
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
		cout << "姓名：" << arr[i].m_Name << "年龄：" << arr[i].m_Age << endl;
	}
}

void test162()
{
	MyArray<Person> arr(10);
	Person p1("张三",14);
	Person p2("李四", 16);
	Person p3("王二", 19);
	Person p4("赵四", 24);
	Person p5("李丹", 35);


	// 将数据插入到数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	// 打印数组数据
	printPersonArr(arr);

	// 输出数组容量
	cout << "arr容量为：" << arr.get_Capacity() << endl;

	// 输出数组大小
	cout << "arr数组大小为：" << arr.get_Size() << endl;
}

int main16()
{
	test161();
	test162();
	return 0;
}