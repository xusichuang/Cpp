# include<iostream>
# include<string>
using namespace std;

int main13()
{
	// 字符串是双引号！！！

	// 1.C语言风格的字符串
	char str1[] = "hello world";
	cout << "str1:" << str1 << endl;

	// 2.C++语言风格的字符串
	// 要使用string 必须包含头文件 string，但是iostream中已经包含了   string std::string str = "hello world"
	string str2 = "hello world";
	cout << "str2:" << str2 << endl;

	return 0;
}