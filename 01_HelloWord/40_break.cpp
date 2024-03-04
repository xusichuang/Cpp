#include<iostream>
using namespace std;


int main31()
{
	// 1. 出现在switch语句中
	cout << "请选择副本难度" << endl;
	cout << "1.普通" << endl;
	cout << "2.中等" << endl;
	cout << "3.困难" << endl;
	int select;
	cin >> select;

	switch (select)
	{
	case 1:
		cout << "您选择的是普通难度" << endl;
		break;
	case 2:
		cout << "您选择的是中等难度" << endl;
		break;
	case 3:
		cout << "您选择的是困难难度" << endl;
		break;
	default:
		cout << "输入错误" << endl;
		break;
	}
	// 2.出现在循环语句中

	// 3.出现在嵌套循环语句中
	// break只能跳出当前的循环语句！！！
	return 0;
}