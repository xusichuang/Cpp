

// string ��������
// ���ʣ�
// string��C++���ַ�������string��������һ����


// string��char*  ����
// char*��һ��ָ��
// string��һ���࣬���ڲ���װ��char*����������ַ���  ��һ��char*������

// �ص㣺
// string���ڲ���װ�˺ܶ��Ա����
// ���磺����find������copy��ɾ��delete���滻replace������insert
// string����char*��������ڴ棬���õ��ĸ�ֵԽ���ȡֵԽ��ȣ������ڲ����и���

// string���캯��
// ���캯��ԭ��
//		string();                        //����һ���յ��ַ��������磺string str
//		string(const char* s);			 //ʹ���ַ���s��ʼ��
//		string(const string& str);		 //ʹ��һ��string�����ʼ����һ��string����
//		string(int n,char c);			 //ʹ��n���ַ�c��ʼ��


#include<iostream>
using namespace std;
// string�Ĺ��캯��
void test051()
{
	//Ĭ�Ϲ���
	string s1;  

	//C���Է���ַ���
	const char* str = "hello world";
	string s2(str);
	cout << "s2=" << s2 << endl;


	// ��������
	string s3(s2);
	cout << "s3=" << s3 << endl;

	string s4(10, 'a');
	cout << "s4=" << s4 << endl;

}

int main05()
{
	test051();
	return 0;
}