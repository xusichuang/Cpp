# include<iostream>;
using namespace std;

int main11()
{
	// 必须用单引号，且单引号里只能有一个字符
	
	// 1.字符型变量创建方式
	char ch = 'a';
	cout << ch << endl;

	// 2.字符型所占内存大小
	cout << "char 所占内存大小" << sizeof(char) << endl;

	// 3. 字符型变量常见错误

	// 4.字符型变量对应的ASCII值
	cout << (int)ch << endl;   // 将ch转成int10进制的值
	cout << (int)'b' << endl;

	return 0;
}