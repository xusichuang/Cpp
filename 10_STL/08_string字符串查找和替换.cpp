#include<iostream>
using namespace std;


// ��������
// ���ң�����ָ���ַ����Ƿ����
// �滻����ָ����λ���滻�ַ���


// ����ԭ�ͣ�
//			int find(const string& str,int pos=0) const;					//����str��һ�γ���λ�ã���pos��ʼ����
//			int find(const char* s,int pos=0) const;						//����s��һ�γ���λ�ã���pos��ʼ����
//			int find(const char* s,int pos,int n) const;					//��posλ�ÿ�ʼ����s��ǰn���ַ�����һ�γ��ֵ�λ��
//			int find(const char c,int pos=0) const;							//�����ַ�c��һ�γ��ֵ�λ��
//			int rfind(const string& str,int pos=0) const;					//���������
//			int rfind(const char* s,int pos=0) const;
//			int find(const char c,int pos=0) const;	
//			string& replace(int pos,int n,const string& str);				//�滻��pos��n���ַ�Ϊ�ַ���str
//			string& replace(int pos,int n,const char* s);					//�滻��pos��ʼ��n���ַ�Ϊ�ַ���s


void test081()
{
	string str1 = "abcdefgde";
	// �����ڷ���-1
	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "pos=" << pos << endl;
	}
	
	pos = str1.rfind("de");
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "pos=" << pos << endl;
	}
}

// �滻
void test082()
{
	string str1 = "abcdefgde";
	str1.replace(1, 3, "111122222222");

	cout << "str1=" << str1 << endl;
}


int main08()
{
	test081();
	test082();
	return 0;
}