#include<iostream>
using namespace std;
#include<set>

// ����ԭ�ͣ�
// find(key)				//����key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end()
// count(key)				//ͳ��key��Ԫ�ظ���


void test391()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	// ����
	set<int>::iterator pos = s1.find(20);
	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ��" << "  Ԫ��Ϊ��" << *pos << endl;
		cout << "�����Ϊ��" <<s1.count(20) << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

}

int main39()
{
	test391();
	return 0;
}