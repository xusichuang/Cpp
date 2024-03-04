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
		{"张飞",27,"男"},
		{"刘备", 22, "男"},
		{"关羽", 23, "男"},
		{"赵云", 21, "男"},
		{"貂蝉", 20, "女"},
	};
	cout << "排序前" << endl;
	for (int i = 0; i < sizeof(hero_arry) / sizeof(hero_arry[0]); i++)
	{
		cout << "姓名：" << hero_arry[i].name << "\t年龄：" << hero_arry[i].age << "\t性别：" << hero_arry[i].sex << endl;
	}
	bubbleSort(hero_arry, 5);
	cout << "排序后" << endl;
	for (int i = 0; i < sizeof(hero_arry) / sizeof(hero_arry[0]); i++)
	{
		cout << "姓名：" << hero_arry[i].name << "\t年龄：" << hero_arry[i].age << "\t性别：" << hero_arry[i].sex << endl;
	}
	return 0;
}