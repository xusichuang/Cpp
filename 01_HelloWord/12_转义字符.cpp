# include<iostream>
using namespace std;


int main12()
{
	// enl 默认换行
	cout << "hello world\n";
	cout << "hello world" << endl;

	// 反斜杠
	cout << "\\" << endl;

	// 水平制表：主要用于对齐
	//     \t+字符总共占8个位置，如果字符已经占8给位置，则\t另占8个位置
	cout << "aaa\t" << "bbbbbb\t" << "hello world" << endl;

	return 0;
}