#include<iostream>

using namespace std;

struct Hero
{
	string name;
	int age;
	string sex;
};


void bubbleSort(Hero hero_array[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j=0; j < len - i - 1;j++)
		{
			if (hero_array[j].age > hero_array[j + 1].age)
			{
				Hero temp = hero_array[j];
				hero_array[j] = hero_array[j + 1];
				hero_array[j + 1] = temp;

			}
		}
	}
}

int main08()
{
	Hero hero_arry[5] =
	{
		{"�ŷ�",27,"��"},
		{"����", 22, "��"},
		{"����", 23, "��"},
		{"����", 21, "��"},
		{"����", 20, "Ů"},
	};
	cout << "����ǰ" << endl;
	for (int i = 0; i < sizeof(hero_arry) / sizeof(hero_arry[0]); i++)
	{
		cout << "������" << hero_arry[i].name << "\t���䣺" << hero_arry[i].age << "\t�Ա�" << hero_arry[i].sex << endl;
	}
	bubbleSort(hero_arry, 5);
	cout << "�����" << endl;
	for (int i = 0; i < sizeof(hero_arry) / sizeof(hero_arry[0]); i++)
	{
		cout << "������" << hero_arry[i].name << "\t���䣺" << hero_arry[i].age << "\t�Ա�" << hero_arry[i].sex << endl;
	}
	return 0;
}