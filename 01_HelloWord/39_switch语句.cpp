#include <iostream>
using namespace std;

int main30()
{
	// 1.�����û����
	cout << "�����Ӱ���" << endl;
	// 2.�û���ʼ���д��
	int score;
	cin >> score;
	cout << "��Ӱ������Ϊ" << score << endl;

	switch (score)
	{
	case 10:
		cout << "����һ�������Ӱ" << endl;
		// �˳���ǰ��֧
		break;
	case 9:
		cout << "���۽ϸߵĵ�Ӱ" << endl;
		break;
	default:
		cout << "����һ����Ƭ" << endl;
		break;
	}
	// switchȱ��:�жϵ�ʱ��ֻ�������λ����ַ��ͣ������������䣡����
	// switch�ŵ㣺�ṹ��������if else����Ч�ʸ�

	return 0;
}