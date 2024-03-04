
// vector��������
// ���ܣ�
//		vector���ݽṹ������ǳ����ƣ�Ҳ��Ϊ��������

// vector����ͨ���������
//		��֮ͬ�����������Ǿ�̬�ռ䣬��vector����  ��̬��չ

// ��̬��չ������
//	��������ԭ�ռ�֮�������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��Դ���ݿ����¿ռ䣬�ͷ�Դ�ռ䣨�������ڴ棬֧��������ʣ�

// vector���캯��
// ����������
//	����vector����

// ����ԭ�ͣ�
// 1.vector<T> v;						// ����ģ����ʵ�֣�Ĭ�Ϲ��캯��
// 2.vector(v.begin(),v.end());			// ��v[begin(),end()�������е�Ԫ�ؿ���������ǰ�պ󿪣�
// 3.vector��n,elem);					// ���캯����n��elem����������
// 4.vector(const vector& vec)			// �������캯��

#include<iostream>
using namespace std;
#include<vector>


void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}

// vector��������
void test131()
{
	vector<int> v1;  //Ĭ�Ϲ��죨�޲ι��죩

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	// ͨ������ķ�ʽ���й���
	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);

	vector<int> v3(10, 100);
	printVector(v3);

	// ��������(���ã�����)
	vector<int> v4(v3);
	printVector(v4);
	
}



int main13()
{
	test131();
	return 0;
}