#include<iostream>
using namespace std;
#include<vector>


// vector�����ɾ��
// ����ԭ�ͣ�
//		push_back(ele);											//β������Ԫ��ele
//		pop_back();												//ɾ�����һ��Ԫ��
//		insert(const_iterator pos,ele)							//������ָ��λ��pos����Ԫ��ele
//		insert(const_iterator pos,int count,ele)				//������ָ��λ��pos����count��Ԫ��ele
//		erase(const_iterator pos)								//ɾ��������ָ���Ԫ��
//		erase(const_iterator start,const_iterator end)			//ɾ����������start��end֮���Ԫ��
//		clear()													//ɾ������������Ԫ��


void printVector4(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

void test161()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector4(v1);


	// βɾ
	v1.pop_back();
	cout << "βɾ֮��Ľ����" << endl;
	printVector4(v1);

	// ����     ��һ�������ǵ�����������
	v1.insert(v1.begin(), 100);
	cout << "����֮��Ľ��" << endl;
	printVector4(v1);

	v1.insert(v1.begin()+5, 2, 55555555);
	printVector4(v1);

	// ɾ��
	v1.erase(v1.end()-1);
	cout << "ɾ��֮��Ľ����" << endl;
	printVector4(v1);

	v1.erase(v1.begin(), v1.begin()+2);
	printVector4(v1);



	// ���
	cout << "��գ�" << endl;
	v1.clear();

}

int main16()
{
	test161();
	return 0;
}