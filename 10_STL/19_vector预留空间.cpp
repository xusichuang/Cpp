#include<iostream>
using namespace std;
#include<vector>

// vectorԤ���ռ�
// ���ܣ�����vector�ڶ�̬��չ����ʱ����չ����

// ����ԭ�ͣ�
//		reserve(int len)		// ����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʣ�����





void test191()
{
	vector<int> v;


	int num = 0;   //ͳ�ƿ��ٵĴ���
	int* p = nullptr;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}

	cout << "���ٵĴ���num=" << num << endl;



	vector<int> v1;
	v1.reserve(100000);
	num = 0;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}
	cout << "���ٵĴ���num=" << num << endl;

}

int main19()
{
	test191();
	return 0;
}