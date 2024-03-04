#include<iostream>

using namespace std;
#define MAX 1000  //�������


// ��ϵ�˽ṹ��
struct Person
{
	string m_name;
	int m_sex;
	int m_age;
	string m_phone;
	string m_address;
};

// ͨѶ¼�ṹ��
struct Addressbook
{
	Person person_array[MAX];
	// ͨѶ¼����Ա����
	int m_size;
};

void showmenu()
{
	cout << "*************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;

}

void AddPerson(Addressbook &abs)
{
	if (abs.m_size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	// �����ϵ��
	string name;
	cout << "������������" << endl;
	cin >> name;
	abs.person_array[abs.m_size].m_name = name;
	int sex;
	
	while (true)
	{
		cout << "�������Ա�1��Ů   2���У���" << endl;
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			abs.person_array[abs.m_size].m_sex = sex;
			break;
		}
		else
		{
			cout << "����������������룡" << endl;
		}
		
	}
	int age;
	cout << "���������䣺" << endl;
	cin >> age;
	abs.person_array[abs.m_size].m_age = age;

	string phone_num;
	cout << "������绰�ţ�" << endl;
	cin >> phone_num;
	abs.person_array[abs.m_size].m_phone = phone_num;

	string address;
	cout << "�������ַ��" << endl;
	cin >> address;
	abs.person_array[abs.m_size].m_address = address;


	// ������ϵ������������
	abs.m_size++;
	
	cout << "��ϵ����ӳɹ���" << endl;
	
	// �밴���������
	system("pause");
	system("cls");
}


void showPerson(Addressbook abs)
{
	//��ʾ������ϵ��
	if (abs.m_size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
		return;
	}
	for (int i = 0; i < abs.m_size; i++)
	{
		cout << "������" << abs.person_array[i].m_name
			<< "\t�Ա�" << (abs.person_array[i].m_sex==1? "��":"Ů")
			<< "\t���䣺" << abs.person_array[i].m_age
			<< "\t�绰��" << abs.person_array[i].m_phone
			<< "\t��ַ��" << abs.person_array[i].m_address << endl;
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
	// ���û���ҵ�����-1
	return -1;
}

void deletePerson(Addressbook& abs)
{
	string name;
	cout << "������ɾ����ϵ��������" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "��ϵ�˲�����" << endl;
		return;
	}
	else
	{
		for (int i = ret; i < abs.m_size; i++)
		{
			// ����ǰ��
			abs.person_array[i] = abs.person_array[i + 1];
		}
		cout << "�ɹ�ɾ����ϵ��" << endl;
		abs.m_size--;
		system("pause");
		system("cls");
	}
}

void findPerson(Addressbook& abs)
{
	string name;
	cout << "����������Ҫ���ҵ��˵�����:" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
		
	}
	else
	{
		cout << "������" << abs.person_array[ret].m_name
			<< "\t�Ա�" << (abs.person_array[ret].m_sex == 1 ? "��" : "Ů")
			<< "\t���䣺" << abs.person_array[ret].m_age
			<< "\t�绰��" << abs.person_array[ret].m_phone
			<< "\t��ַ��" << abs.person_array[ret].m_address << endl;
	}
	system("pause");
	system("cls");
}

void cleanPerson(Addressbook& abs)
{
	// �����ϵ ��
	abs.m_size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

int main()
{
	int select;
	// ����ͨѶ¼�ṹ�����
	Addressbook abs;
	// ��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_size = 0;
	while (true)
	{

		showmenu();
		cout << "����������Ҫ���еĲ�����ţ�";
		cin >> select;
		switch (select)
		{
		case 1:
			// �����ϵ��
			AddPerson(abs);
			break;
		case 2:
			// ɾ����ϵ��
			showPerson(abs);
			break;
		case 3:
			// case������д�������Ҫ��{}
		{
			// ɾ����ϵ��
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
			cout << "��ӭ�´�ʹ��" << endl;
			// �밴���������
			system("pause");
			return 0;
			break;
		default:
			break;

		}
	}



	return 0;
}