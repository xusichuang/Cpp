#include<iostream>

using namespace std;
#define MAX 1000  //最大人数


// 联系人结构体
struct Person
{
	string m_name;
	int m_sex;
	int m_age;
	string m_phone;
	string m_address;
};

// 通讯录结构体
struct Addressbook
{
	Person person_array[MAX];
	// 通讯录中人员个数
	int m_size;
};

void showmenu()
{
	cout << "*************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "*************************" << endl;

}

void AddPerson(Addressbook &abs)
{
	if (abs.m_size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	// 添加联系人
	string name;
	cout << "请输入姓名：" << endl;
	cin >> name;
	abs.person_array[abs.m_size].m_name = name;
	int sex;
	
	while (true)
	{
		cout << "请输入性别（1：女   2：男）：" << endl;
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			abs.person_array[abs.m_size].m_sex = sex;
			break;
		}
		else
		{
			cout << "输入错误，请重新输入！" << endl;
		}
		
	}
	int age;
	cout << "请输入年龄：" << endl;
	cin >> age;
	abs.person_array[abs.m_size].m_age = age;

	string phone_num;
	cout << "请输入电话号：" << endl;
	cin >> phone_num;
	abs.person_array[abs.m_size].m_phone = phone_num;

	string address;
	cout << "请输入地址：" << endl;
	cin >> address;
	abs.person_array[abs.m_size].m_address = address;


	// 更新联系人数量！！！
	abs.m_size++;
	
	cout << "联系人添加成功！" << endl;
	
	// 请按任意键结束
	system("pause");
	system("cls");
}


void showPerson(Addressbook abs)
{
	//显示所有联系人
	if (abs.m_size == 0)
	{
		cout << "通讯录为空" << endl;
		return;
	}
	for (int i = 0; i < abs.m_size; i++)
	{
		cout << "姓名：" << abs.person_array[i].m_name
			<< "\t性别：" << (abs.person_array[i].m_sex==1? "男":"女")
			<< "\t年龄：" << abs.person_array[i].m_age
			<< "\t电话：" << abs.person_array[i].m_phone
			<< "\t地址：" << abs.person_array[i].m_address << endl;
	}
	system("pause");
	system("cls");
}



int isExist(Addressbook& abs,string name)
{
	for (int i = 0; i < abs.m_size; i++)
	{
		if (abs.person_array[i].m_name == name)
		{
			return i;
		}
	}
	// 如果没有找到返回-1
	return -1;
}

void deletePerson(Addressbook& abs)
{
	string name;
	cout << "请输入删除联系人姓名：" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "联系人不存在" << endl;
		return;
	}
	else
	{
		for (int i = ret; i < abs.m_size; i++)
		{
			// 数据前移
			abs.person_array[i] = abs.person_array[i + 1];
		}
		cout << "成功删除联系人" << endl;
		abs.m_size--;
		system("pause");
		system("cls");
	}
}

void findPerson(Addressbook& abs)
{
	string name;
	cout << "请输入你需要查找的人的姓名:" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
		
	}
	else
	{
		cout << "姓名：" << abs.person_array[ret].m_name
			<< "\t性别：" << (abs.person_array[ret].m_sex == 1 ? "男" : "女")
			<< "\t年龄：" << abs.person_array[ret].m_age
			<< "\t电话：" << abs.person_array[ret].m_phone
			<< "\t地址：" << abs.person_array[ret].m_address << endl;
	}
	system("pause");
	system("cls");
}

void cleanPerson(Addressbook& abs)
{
	// 清空联系 人
	abs.m_size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

int main()
{
	int select;
	// 创建通讯录结构体变量
	Addressbook abs;
	// 初始化通讯录中当前人员个数
	abs.m_size = 0;
	while (true)
	{

		showmenu();
		cout << "请输入你想要进行的操作序号：";
		cin >> select;
		switch (select)
		{
		case 1:
			// 添加联系人
			AddPerson(abs);
			break;
		case 2:
			// 删除联系人
			showPerson(abs);
			break;
		case 3:
			// case下面多行代码则需要加{}
		{
			// 删除联系人
			deletePerson(abs);
			
		}
			break;
		case 4:
			findPerson(abs);
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			// 请按任意键继续
			system("pause");
			return 0;
			break;
		default:
			break;

		}
	}



	return 0;
}