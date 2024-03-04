#include<iostream>
using namespace std;

// 案例描述：
// 1.利用函数模板封装一个排序函数，可以对   不同数据类型数组  进行排序
// 2.排序规则从大到小，排序算法为  选择排序
// 3.分别利用   char数组和int数组  进行测试


// 数据交换的模板
template<typename T>    // 声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用的数据类型
void Swap_elements(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}


// 排序算法模板
template<typename T>
void mySort(T arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		// max：最大值的下标
		int max = i;
		for (int j = i + 1; j < length; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			// 交换两个元素
			Swap_elements(arr[max], arr[i]);
		}
	}
}

// 打印数组的模板
template<typename T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test031()
{
	// 测试char数组
	char charArr[] = "akbglcd";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);

}

void test032()
{
	// 测试int数组
	int intArr[] = { 7,6,9,1,4,23,56 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);
}

int main03()
{
	test031();
	test032();
	return 0;
}