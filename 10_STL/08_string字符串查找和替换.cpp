#include<iostream>
using namespace std;


// 功能描述
// 查找：查找指定字符串是否存在
// 替换：在指定的位置替换字符串


// 函数原型：
//			int find(const string& str,int pos=0) const;					//查找str第一次出现位置，从pos开始查找
//			int find(const char* s,int pos=0) const;						//查找s第一次出现位置，从pos开始查找
//			int find(const char* s,int pos,int n) const;					//从pos位置开始查找s的前n个字符串第一次出现的位置
//			int find(const char c,int pos=0) const;							//查找字符c第一次出现的位置
//			int rfind(const string& str,int pos=0) const;					//从右往左查
//			int rfind(const char* s,int pos=0) const;
//			int find(const char c,int pos=0) const;	
//			string& replace(int pos,int n,const string& str);				//替换从pos开n个字符为字符串str
//			string& replace(int pos,int n,const char* s);					//替换从pos开始的n给字符为字符串s


void test081()
{
	string str1 = "abcdefgde";
	// 不存在返回-1
	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else
	{
		cout << "pos=" << pos << endl;
	}
	
	pos = str1.rfind("de");
	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else
	{
		cout << "pos=" << pos << endl;
	}
}

// 替换
void test082()
{
	string str1 = "abcdefgde";
	str1.replace(1, 3, "111122222222");

	cout << "str1=" << str1 << endl;
}


int main08()
{
	test081();
	test082();
	return 0;
}