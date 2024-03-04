#include<iostream>
using namespace std;

// 从字符串中获取想要的字串

// 函数原型：
//			string substr(int pos = 0, int n = npos)const;			//返回由pos开始的n给字符组成的字符串

void test121()
{
	string str = "abcdefg";

	string SubStr = str.substr(1, 3);
	cout << "SubStr=" << SubStr << endl;
}


// 实用操作
void test122()
{
	string email = "zhangsan@sina.com";

	//从邮件地址中获取用户名信息
	int pos = email.find("@");
	string userName = email.substr(0, pos);
	cout << "userName=" << userName << endl;
}

int main12()
{
	test121();
	test122();
	return 0;
}