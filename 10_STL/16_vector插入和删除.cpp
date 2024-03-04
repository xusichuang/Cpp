#include<iostream>
using namespace std;
#include<vector>


// vector插入和删除
// 函数原型：
//		push_back(ele);											//尾部插入元素ele
//		pop_back();												//删除最后一个元素
//		insert(const_iterator pos,ele)							//迭代器指定位置pos插入元素ele
//		insert(const_iterator pos,int count,ele)				//迭代器指向位置pos插入count给元素ele
//		erase(const_iterator pos)								//删除迭代器指向的元素
//		erase(const_iterator start,const_iterator end)			//删除迭代器从start到end之间的元素
//		clear()													//删除容器中所有元素


void printVector4(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

void test161()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector4(v1);


	// 尾删
	v1.pop_back();
	cout << "尾删之后的结果：" << endl;
	printVector4(v1);

	// 插入     第一个参数是迭代器！！！
	v1.insert(v1.begin(), 100);
	cout << "插入之后的结果" << endl;
	printVector4(v1);

	v1.insert(v1.begin()+5, 2, 55555555);
	printVector4(v1);

	// 删除
	v1.erase(v1.end()-1);
	cout << "删除之后的结果：" << endl;
	printVector4(v1);

	v1.erase(v1.begin(), v1.begin()+2);
	printVector4(v1);



	// 清空
	cout << "清空：" << endl;
	v1.clear();

}

int main16()
{
	test161();
	return 0;
}