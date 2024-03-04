#include<iostream>
using namespace std;
#include<vector>

// vector容量和大小


// 函数原型
//		empty();
//		capacity();					// 容器的容量
//		size()	
//		resize(int num)				// 重新指定容器的长度为num,若容器变长，则以默认值填充新位置
//									// 如果容器变短，则末尾超出容器长度的元素被删除
// 
//		resize(int num,elem)		// 重新指定容器的长度为num，若容器变长，则以elem填充新位置
									// 如果容器变短，则末尾超出容器长度的元素被删除

void printVector3(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

void test151()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector3(v1);


	// 默认补充0
	v1.resize(15);
	printVector3(v1);


	// 指定填充值为100
	v1.resize(20, 100);
	printVector3(v1);


}

int main15()
{
	test151();
	return 0;
}