# include<iostream>;
using namespace std;

int main11()
{
	// �����õ����ţ��ҵ�������ֻ����һ���ַ�
	
	// 1.�ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;

	// 2.�ַ�����ռ�ڴ��С
	cout << "char ��ռ�ڴ��С" << sizeof(char) << endl;

	// 3. �ַ��ͱ�����������

	// 4.�ַ��ͱ�����Ӧ��ASCIIֵ
	cout << (int)ch << endl;   // ��chת��int10���Ƶ�ֵ
	cout << (int)'b' << endl;

	return 0;
}