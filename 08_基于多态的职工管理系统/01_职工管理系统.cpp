#include<iostream>
using namespace std;
#include "02_workerManager.h"


#include "03_worker.h"
#include "04_employee.h"
#include "05_manager.h"
#include "06_boss.h"
int main()
{
	//// 创建一个员工
	//Worker* wk = nullptr;
	//wk = new Employee(1, "张三", 1);
	//wk->showInfo();
	//delete wk;
	//wk = nullptr;

	//wk = new Manager(2, "李四", 2);
	//wk->showInfo();
	//wk = nullptr;

	//wk = new Boss(3, "王五", 3);
	//wk->showInfo();
	//wk = nullptr;

	// 实例化管理者对象
	WorkerManager wm;

	// 用户的选择
	int choice;
	while (true)
	{
		// 调用展示菜单成员函数
		wm.Show_Menu();
		cout << "请输入您的选择:" << endl;
		cin >> choice;  //接受用户的选择
		cin.clear();
		cin.ignore();
		switch (choice)
		{
		case 0:  //退出系统
			wm.exit_System();
			break;
		case 1:  //增加职工
			wm.Add_Emp();
			break;
		case 2:  //显示职工
			wm.Show_Emp_Info();
			break;
		case 3:  //删除职工
		// 当代码超过1行则需加{}！！！
		{
			//// 测试代码
			//int ret = wm.IsExist(5);
			//if (ret != -1)
			//{
			//	cout << "职工存在" << endl;
			//}
			//else
			//{
			//	cout << "职工不存在" << endl;
			//}
			wm.Delete_Emp_Info();
		}
			break;
		case 4:  //修改职工
			wm.Modify_Emp_Info();
			break;
		case 5:  //查找职工
			wm.fin_Emp();
			break;
		case 6:  //排序职工
			wm.Sort_Empid();
			break;
		case 7:  //清空文档
			wm.Clean_File();
			break;
		default:
			// 清屏
			system("cls");
			break;
		}
	}

	
	return 0;
}