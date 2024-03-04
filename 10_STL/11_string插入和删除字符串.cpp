#include<iostream>
using namespace std;

// string字符串插入和杉树

// 函数原型：
//			string& insert（int pos,const char* s);						//插入字符串
//			string& insert（int pos,const string& str);					//插入字符串
//			string& insert（int pos,int n,const char c);				//在指定位置插入n个字符c
//			string& erase(int pos,int n=npos)							//删除从pos开始的n个字符

void test111()
{
	string str = "hello";
	// 插入
	str.insert(1, "123");
	cout << "str=" << str << endl;

	str.erase(0,1);
	cout << "str=" << str << endl;
}


int main11()
{
	test111();
	return 0;
}