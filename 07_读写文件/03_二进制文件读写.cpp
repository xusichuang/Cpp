#include<iostream>
using namespace std;

#include<fstream>


// 二进制文件 写文件
class Person
{
public:
	// 用字符数组来表示字符串，不用string m_Name！！！
	char m_Name[64];
	int m_age;
};


void test03()
{
	// 1.包含头文件<fstream>

	// 2.创建流对象
	ofstream ofs;
	
	// 3.打开文件
	ofs.open("person.txt", ios::out | ios::binary);

	// 2.3.可以合并    ofstream ofs("person.txt", ios::out | ios::binary);

	// 4.写文件
	Person p = { "张三",18 };
	// 将p的地址强转成char*
	ofs.write((const char*)&p,sizeof(Person));

	// 5.关闭文件
	ofs.close();
}

void test032()
{
	// 1.包含头文件<fstream>

	// 2.创建流对象
	ifstream ifs;
	// 3.打开文件   判断文件是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	// 4.读文件
	Person p1;
	ifs.read((char*)&p1, sizeof(Person));
	cout << "姓名:" << p1.m_Name << "年龄:" << p1.m_age << endl;


	// 5.关闭文件
	ifs.close();
}

int main()
{
	//test03();
	test032();
	return 0;
}