#include<iostream>
using namespace std;



// 实现在字符串末尾拼接字符串
// 函数原型:
//			string& operator+=(const char* str);				//重载+=操作符
//			string& operator+=(const char c);					//重载+=操作符
//			string& operator+=(const string& str);				//重载+=操作符
//			string& append(const char* s);						//把字符串s连接到当前字符串结尾
//			string& append(const char* s,int n);				//把字符串s的前n个字符连接到当前字符串结尾
//			string& append(const string& s)						//同operator+=(const string& str)
//			string& append(const string& s,int pos,int n)		//字符串s中从pos开始的n个字符串连接到字符串结尾


void test071()
{
	string str1 = "我";
	str1 += "爱玩游戏";
	cout << "str1=" << str1 << endl;

	string str2 = "我";
	str2 += ":";
	cout << "str2=" << str2 << endl;


	string str3 = "LOL and DNF";
	str1 += str3;
	cout << "str1=" << str1 << endl;

	string str4 = "I";
	str4.append("love games");
	cout << "str4=" << str4 << endl;

	string str5 = "I";
	str5.append("love games",4);
	cout << "str5=" << str5 << endl;

	string str6 = "I";
	str6.append(str1);
	cout << "str6=" << str6 << endl;

	string str7 = "I";
	str7.append("love games", 5,1000);
	cout << "str7=" << str7 << endl;
}

int main07()
{
	test071();
	return 0;
}