
#include<iostream>
using namespace std;

// C++对文件操作需要包含头文件<fstream>
#include<fstream>


// 文本类型分为两种
// 1.文本文件   -- 文件以文本ASCII码形式存储与计算机
// 2.二进制文件 -- 文件以文本二进制形式存储与计算机中


// 文件三大类操作
// 1.ofstream:写操作
// 2.ifstream：读操作
// 3.fstream：读写操作

// 打开方式
// ios::in      为读文件而打开文件
// ios::out     为写文件而打开文件
// ios::ate     打开文件的初始位置:文件尾
// ios::app     追加的方式写文件
// ios::trunc   如果文件存在则先删除，再创建
//ios::binary   二进制方式打开文件

// 注意：文件打开方式可以配合使用，利用|操作符
// 例如：用二进制方式写文件 ios::binary | ios::out


void test01()
{
	// 1.包含头文件fstream

	// 2.创建流对象
	ofstream ofs;

	// 3.指定打开方式
	ofs.open("text.txt", ios::out);

	// 4.写内容
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;

	// 5.关闭文件
	ofs.close();
}

int main01()
{
	test01();
	system("pause");
	return 0;
}
