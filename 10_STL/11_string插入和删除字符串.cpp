#include<iostream>
using namespace std;

// string�ַ��������ɼ��

// ����ԭ�ͣ�
//			string& insert��int pos,const char* s);						//�����ַ���
//			string& insert��int pos,const string& str);					//�����ַ���
//			string& insert��int pos,int n,const char c);				//��ָ��λ�ò���n���ַ�c
//			string& erase(int pos,int n=npos)							//ɾ����pos��ʼ��n���ַ�

void test111()
{
	string str = "hello";
	// ����
	str.insert(1, "123");
	cout << "str=" << str << endl;

	str.erase(0,1);
	cout << "str=" << str << endl;
}


int main11()
{
	test111();
	return 0;
}