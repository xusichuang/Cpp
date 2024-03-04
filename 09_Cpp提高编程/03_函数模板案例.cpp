#include<iostream>
using namespace std;

// ����������
// 1.���ú���ģ���װһ�������������Զ�   ��ͬ������������  ��������
// 2.�������Ӵ�С�������㷨Ϊ  ѡ������
// 3.�ֱ�����   char�����int����  ���в���


// ���ݽ�����ģ��
template<typename T>    // ����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ�õ���������
void Swap_elements(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}


// �����㷨ģ��
template<typename T>
void mySort(T arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		// max�����ֵ���±�
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
			// ��������Ԫ��
			Swap_elements(arr[max], arr[i]);
		}
	}
}

// ��ӡ�����ģ��
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
	// ����char����
	char charArr[] = "akbglcd";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);

}

void test032()
{
	// ����int����
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