#include<iostream>
using namespace std;


// �ַ���֮��Ƚ�
// �ȽϷ�ʽ
// �ַ����Ƚ��ǰ��ַ���ASCII����жԱ�
//		=����0
//		>����1
//		<����-1


// ����ԭ�ͣ�
//			int compare(const string& s)const;
//			int compare(const char* s) const;


void test091()
{
	string str1 = "hello";
	string str2 = "hello";

	// һ��ֻ�Ƚ��Ƿ����
	if (str1.compare(str2) == 0)
	{
		cout << "str1����str2" << endl;
	}
	else if (str1.compare(str2)>0)
	{
		cout << "str1����str2" << endl;
	}
	else
	{
		cout << "str1С��str2" << endl;
	}
}

int main09()
{
	test091();
	return 0;
}