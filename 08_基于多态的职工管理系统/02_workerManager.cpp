#include "02_workerManager.h"

WorkerManager::WorkerManager()
{
	// 1.文件不存在
	ifstream ifs;
	ifs.open(FILENAME,ios::in);  // 读文件

	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		// 初始化属性
		// 初始化记录人数
		this->m_Emp_Num = 0;
		// 初始化数组指针
		this->m_Emp_Arr = nullptr;
		// 初始化文件是否为空
		this->m_FileEmpty = true;
		ifs.close();
		return;
	}

	// 2.文件存在，数据为空
	char ch;
	// 读取一个字符
	ifs >> ch;
	// 如果读到末尾
	if (ifs.eof())
	{
		cout << "文件为空" << endl;
		// 初始化属性
		// 初始化记录人数
		this->m_Emp_Num = 0;
		// 初始化数组指针
		this->m_Emp_Arr = nullptr;
		// 初始化文件是否为空
		this->m_FileEmpty = true;
		ifs.close();
		return;
	}

	// 3.当文件存在并且记录数据
	int num = this->get_Emp_Num();
	cout << "当前职工人数为:" << num << endl;
	this->m_Emp_Num = num;

	// 手动创建一个数组
	this->m_Emp_Arr = new Worker * [this->m_Emp_Num];
	// 将已创建的文件数据存储到数组中
	this->init_Emp();

	// 测试代码
	//for (int i = 0; i < this->m_Emp_Num; i++)
	//{
	//	cout << "职工编号:" << this->m_Emp_Arr[i]->m_Id
	//		<< "姓名:" << this->m_Emp_Arr[i]->m_Name
	//		<< "部门编号:" << this->m_Emp_Arr[i]->m_DepId << endl;
	//}

	
}


WorkerManager::~WorkerManager()
{
	// 释放堆区数据，堆区数据手动创建手段释放
	if (this->m_Emp_Arr != NULL)
	{
		for (int i = 0; i < this->m_Emp_Num; i++)
		{
			if (this->m_Emp_Arr[i] != NULL)
			{
				delete this->m_Emp_Arr[i];
				this->m_Emp_Arr[i] = nullptr;
			}
			
		}
		delete[] this->m_Emp_Arr;
		this->m_Emp_Arr = NULL;
	}
}

void WorkerManager::Show_Menu()
{
	cout << "***************************************" << endl;
	cout << "**********欢迎使用职工管理系统*********" << endl;
	cout << "************0.退出管理程序*************" << endl;
	cout << "************1.增加职工信息*************" << endl;
	cout << "************2.显示职工信息*************" << endl;
	cout << "************3.删除离职职工*************" << endl;
	cout << "************4.修改职工信息*************" << endl;
	cout << "************5.查找职工信息*************" << endl;
	cout << "************6.按照编号排序*************" << endl;
	cout << "************7.清空所有文档*************" << endl;
	cout << "***************************************" << endl;
}

void WorkerManager::exit_System()
{
	cout << "您已退出系统，欢迎下次使用！！！" << endl;
	// 按任意键继续
	system("pause");
	// 退出程序
	exit(0);
}

void WorkerManager::Add_Emp()
{
	cout << "请输入添加职工的数量" << endl;
	// 保存用户的输入数量
	int add_num;
	cin >> add_num;
	if (add_num > 0)
	{
		// 添加
		// 计算添加新空间大小
		int newSize = this->m_Emp_Num + add_num; // 新空间人数=原来记录人数+新增人数

		// 开辟新空间
		Worker** newspace = new Worker * [newSize];

		// 将原来空间下的数据拷贝到新空间下
		if (this->m_Emp_Arr != NULL)
		{
			for (int i = 0; i < this->m_Emp_Num; i++)
			{
				newspace[i] = this->m_Emp_Arr[i];
			}
		}

		// 添加新数据
		for (int i = 0; i < add_num; i++)
		{
			int id;      // 职工编号
			string name; //职工姓名
			int dSelect;   //部门选择
			cout << "请输入第" << i + 1 << "个新职工编号" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个新职工姓名" << endl;
			cin >> name;
			cout << "请输入该职工岗位" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dSelect;

			Worker* worker = nullptr;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			// 将创建职工职责,保存到数组中
			newspace[this->m_Emp_Num + i] = worker;
			
		}
		// 释放原有空间
		delete[] this->m_Emp_Arr;
		this->m_Emp_Arr = NULL;

		// 更新数组指向
		this->m_Emp_Arr = newspace;

		// 更新职工人数
		this->m_Emp_Num = newSize;


		// 更新数据文件不为空
		this->m_FileEmpty = false;

		cout << "成功添加" << add_num << "名新职工" << endl;

		// 保存数据到文件中
		this->save();
	}
	else
	{
		cout << "输入数据有误" << endl;
	}

	// 按任意键后，清屏回到上级目录
	system("pause");
	system("cls");

}


void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);    // 用输出的方式打开文件：写文件

	// 将每个人的数据写到文件中
	for (int i = 0; i < this->m_Emp_Num; i++)
	{
		// 利用左移运算符将数据写入
		ofs << this->m_Emp_Arr[i]->m_Id << " "
			<< this->m_Emp_Arr[i]->m_Name << " "
			<< this->m_Emp_Arr[i]->m_DepId << endl;
	}
	// 关闭文件
	ofs.close();
}

int  WorkerManager::get_Emp_Num()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);  // 打开文件，  读

	int id;
	string name;
	int depid;

	int num = 0;

	// 右移运算符读数据
	while (ifs >> id && ifs >> name && ifs >> depid)
	{
		// 统计人数
		num++;
	}
	return num;
}


void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int depid;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> depid)
	{
		Worker* worker = nullptr;
		
		if (depid == 1)
		{
			worker = new Employee(id, name, depid);
		}
		else if (depid == 2)
		{
			worker = new Manager(id, name, depid);
		}
		else
		{
			worker = new Boss(id, name, depid);
		}
		this->m_Emp_Arr[index] = worker;
		index++;
	}

	ifs.close();
}

void WorkerManager::Show_Emp_Info()
{
	if (this->m_FileEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < m_Emp_Num; i++)
		{
			// 利用多态调用接口
			this->m_Emp_Arr[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Delete_Emp_Info()
{
	if (this->m_FileEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		// 按照职工编号删除
		cout << "请输入想要删除的职工编号：" << endl;
		int id;
		cin >> id;
		int index = this->IsExist(id);
		
		if (index != -1) // 职工村，并且要删除数组上index位置上的职工
		{
			// 数组中的数据前移
			for (int i = index; i < this->m_Emp_Num-1; i++)
			{
				this->m_Emp_Arr[i] = this->m_Emp_Arr[i + 1];
			}
			// 人员个数减一
			this->m_Emp_Num--;

			// 数据同步更新到文件中
			this->save();
			cout << "删除成功" << endl;
		}
		else
		{
			cout << "未找到该职工，删除失败" << endl;
		}
	}
	system("pause");
	system("cls");
}

// 根据职工编号判断是否存在，若存在则返回职工在数组中的位置，否则返回-1
int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_Emp_Num; i++)
	{
		if (this->m_Emp_Arr[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}


// 修改职工
void WorkerManager::Modify_Emp_Info()
{
	// 按照职工编号修改
	cout << "请输入想要修改的职工编号：" << endl;
	int id;
	cin >> id;
	int index = this->IsExist(id);
	if (index != -1)
	{
		// 删除数组中对应位置的数据
		delete this->m_Emp_Arr[index];
		this->m_Emp_Arr[index] = nullptr;

		int newid;
		string newName;
		int newDepid;

		cout << "请对该职员的信息作出更改" << endl;
		cout << "新编号为:" << endl;
		cin >> newid;

		cout << "新名字:" << endl;
		cin >> newName;

		cout << "请输入该职工岗位" << endl;
		cout << "1.普通职工" << endl;
		cout << "2.经理" << endl;
		cout << "3.老板" << endl;
		cin >> newDepid;

		Worker* worker = nullptr;

		switch (newDepid)
		{
		case 1:
			worker = new Employee(newid, newName, newDepid);
			break;
		case 2:
			worker = new Manager(newid, newName, newDepid);
			break;
		case 3:
			worker = new Boss(newid, newName, newDepid);
			break;
		default:
			break;
		}

		// 将数据保存操数组中
		this->m_Emp_Arr[index] = worker;
		
		cout << "修改成功" << endl;

		// 保存到文件中
		this->save();
	}
	else
	{
		cout << "未找到该职工，无法修改" << endl;
	}
}


// 查找职工
void WorkerManager::fin_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入查找方式:" << endl;
		cout << "1.按职工编号查找" << endl;
		cout << "2.按姓名查找" << endl;

		int select;
		cin >> select;

		if (select == 1)
		{
			int id;
			cout << "请输入职工编号" << endl;
			cin >> id;

			int ret = this->IsExist(id);
			if (ret != -1)
			{
				cout << "查找成功，信息如下：" << endl;
				this->m_Emp_Arr[ret]->showInfo();
			}
			else
			{
				cout << "查无此人" << endl;
			}
		}
		else if (select == 2)
		{
			string name;
			cout << "请输入职工姓名" << endl;
			cin >> name;

			// 查找到的标志
			bool flag = false;
			for (int i = 0; i < this->m_Emp_Num; i++)
			{
				if (this->m_Emp_Arr[i]->m_Name == name)
				{
					cout << "查找成功，职工编号为"
						<< this->m_Emp_Arr[i]->m_Id << endl;
					flag = true;
					this->m_Emp_Arr[i]->showInfo();
				}
			}

			if (flag == false)
			{
				// 查无此人
				cout << "查找失败，查无此人" << endl;
			}
		}
		else
		{
			cout << "输入有误" << endl;

		}
	}
	system("pause");
	system("cls");
}

// 职工编号排序
void WorkerManager::Sort_Empid()
{
	if (this->m_FileEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请选择排序方式:" << endl;
		cout << "1.按职工号进行升序" << endl;
		cout << "2.按职工号进行降序" << endl;
		int select;
		cin >> select;

		for (int i = 0; i < this->m_Emp_Num; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < this->m_Emp_Num; j++)
			{
				if (select == 1)
				{
					// 升序
					if (this->m_Emp_Arr[minOrMax]->m_Id > this->m_Emp_Arr[j]->m_Id)
					{
						minOrMax = j;
					}
				}

				else
				{
					// 降序
					if (this->m_Emp_Arr[minOrMax]->m_Id < this->m_Emp_Arr[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				if (i != minOrMax)
				{
					Worker* tmp = this->m_Emp_Arr[i];
					this->m_Emp_Arr[i] = this->m_Emp_Arr[j];
					this->m_Emp_Arr[j] = tmp;
				}
			}
		}
		cout << "排序成功,排序结果为：" << endl;
		this->Show_Emp_Info();
		this->save();
	}
	system("pause");
	system("cls");
}

// 清空文件
void WorkerManager::Clean_File()
{
	cout << "确认清空？" << endl;
	cout << "1.确认" << endl;
	cout << "2.返回" << endl;
	int select;
	cin >> select;
	if (select == 1)
	{
		// 打开模式 ios::trunc:如果存在则删除文件并重新创建
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		// 如果数组数据不为空，则手动释放堆区内存！！！
		if (this->m_Emp_Arr != NULL)
		{
			for (int i = 0; i < this->m_Emp_Num; i++)
			{
				if (this->m_Emp_Arr[i] != NULL)
				{
					// 释放数组元素在堆区的内存！！！
					delete this->m_Emp_Arr[i];
					this->m_Emp_Arr[i] = nullptr;
				}
			}
			this->m_Emp_Num = 0;
			// 释放数组在堆区的内存
			delete[] this->m_Emp_Arr;
			this->m_Emp_Arr = nullptr;
			this->m_FileEmpty = true;

		}
		cout << "清理成功" << endl;

	}
	system("pause");
	system("cls");
}