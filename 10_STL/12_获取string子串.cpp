#include<iostream>
using namespace std;

// ���ַ����л�ȡ��Ҫ���ִ�

// ����ԭ�ͣ�
//			string substr(int pos = 0, int n = npos)const;			//������pos��ʼ��n���ַ���ɵ��ַ���

void test121()
{
	string str = "abcdefg";

	string SubStr = str.substr(1, 3);
	cout << "SubStr=" << SubStr << endl;
}


// ʵ�ò���
void test122()
{
	string email = "zhangsan@sina.com";

	//���ʼ���ַ�л�ȡ�û�����Ϣ
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