#include<iostream>
using namespace std;



// ʵ�����ַ���ĩβƴ���ַ���
// ����ԭ��:
//			string& operator+=(const char* str);				//����+=������
//			string& operator+=(const char c);					//����+=������
//			string& operator+=(const string& str);				//����+=������
//			string& append(const char* s);						//���ַ���s���ӵ���ǰ�ַ�����β
//			string& append(const char* s,int n);				//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//			string& append(const string& s)						//ͬoperator+=(const string& str)
//			string& append(const string& s,int pos,int n)		//�ַ���s�д�pos��ʼ��n���ַ������ӵ��ַ�����β


void test071()
{
	string str1 = "��";
	str1 += "������Ϸ";
	cout << "str1=" << str1 << endl;

	string str2 = "��";
	str2 += ":";
	cout << "str2=" << str2 << endl;


	string str3 = "LOL and DNF";
	str1 += str3;
	cout << "str1=" << str1 << endl;

	string str4 = "I";
	str4.append("love games");
	cout << "str4=" << str4 << endl;

	string str5 = "I";
	str5.append("love games",4);
	cout << "str5=" << str5 << endl;

	string str6 = "I";
	str6.append(str1);
	cout << "str6=" << str6 << endl;

	string str7 = "I";
	str7.append("love games", 5,1000);
	cout << "str7=" << str7 << endl;
}

int main07()
{
	test071();
	return 0;
}