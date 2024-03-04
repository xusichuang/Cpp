#include<iostream>
#include<fstream>
using namespace std;
#include<string>

void test02()
{
	// 1.包含头文件<fstream>

	// 2.创建对象流
	ifstream ifs;
	// 3.打开文件，并且判断是否成功打开
	ifs.open("text.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	// 4.读数据

	/*
	第一种读数据方法
	char buf[1024] = { 0 };
	// 将ifs中的数据读到buf之中
	// 每次按行读取
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	*/

	/*
	// 第二种读数据方法
	char buf[1024] = { 0 };
	// 每次按行读取
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}
	*/


	/*
	// 第三种读取数据方法
	string buf;
	// 要添加include<string>才会显示getline方法
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
	*/

	// 第四种
	char c;
	// 如果没读到文件尾     EOF:end of file
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	// 5.关闭文件
	ifs.close();
}

int main02()
{
	test02();
	return 0;
}