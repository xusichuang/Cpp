#include<iostream>
using namespace std;
#include "02_workerManager.h"


#include "03_worker.h"
#include "04_employee.h"
#include "05_manager.h"
#include "06_boss.h"
int main()
{
	//// ����һ��Ա��
	//Worker* wk = nullptr;
	//wk = new Employee(1, "����", 1);
	//wk->showInfo();
	//delete wk;
	//wk = nullptr;

	//wk = new Manager(2, "����", 2);
	//wk->showInfo();
	//wk = nullptr;

	//wk = new Boss(3, "����", 3);
	//wk->showInfo();
	//wk = nullptr;

	// ʵ���������߶���
	WorkerManager wm;

	// �û���ѡ��
	int choice;
	while (true)
	{
		// ����չʾ�˵���Ա����
		wm.Show_Menu();
		cout << "����������ѡ��:" << endl;
		cin >> choice;  //�����û���ѡ��
		cin.clear();
		cin.ignore();
		switch (choice)
		{
		case 0:  //�˳�ϵͳ
			wm.exit_System();
			break;
		case 1:  //����ְ��
			wm.Add_Emp();
			break;
		case 2:  //��ʾְ��
			wm.Show_Emp_Info();
			break;
		case 3:  //ɾ��ְ��
		// �����볬��1�������{}������
		{
			//// ���Դ���
			//int ret = wm.IsExist(5);
			//if (ret != -1)
			//{
			//	cout << "ְ������" << endl;
			//}
			//else
			//{
			//	cout << "ְ��������" << endl;
			//}
			wm.Delete_Emp_Info();
		}
			break;
		case 4:  //�޸�ְ��
			wm.Modify_Emp_Info();
			break;
		case 5:  //����ְ��
			wm.fin_Emp();
			break;
		case 6:  //����ְ��
			wm.Sort_Empid();
			break;
		case 7:  //����ĵ�
			wm.Clean_File();
			break;
		default:
			// ����
			system("cls");
			break;
		}
	}

	
	return 0;
}