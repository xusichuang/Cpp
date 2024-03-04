#include "02_workerManager.h"

WorkerManager::WorkerManager()
{
	// 1.�ļ�������
	ifstream ifs;
	ifs.open(FILENAME,ios::in);  // ���ļ�

	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		// ��ʼ������
		// ��ʼ����¼����
		this->m_Emp_Num = 0;
		// ��ʼ������ָ��
		this->m_Emp_Arr = nullptr;
		// ��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileEmpty = true;
		ifs.close();
		return;
	}

	// 2.�ļ����ڣ�����Ϊ��
	char ch;
	// ��ȡһ���ַ�
	ifs >> ch;
	// �������ĩβ
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��" << endl;
		// ��ʼ������
		// ��ʼ����¼����
		this->m_Emp_Num = 0;
		// ��ʼ������ָ��
		this->m_Emp_Arr = nullptr;
		// ��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileEmpty = true;
		ifs.close();
		return;
	}

	// 3.���ļ����ڲ��Ҽ�¼����
	int num = this->get_Emp_Num();
	cout << "��ǰְ������Ϊ:" << num << endl;
	this->m_Emp_Num = num;

	// �ֶ�����һ������
	this->m_Emp_Arr = new Worker * [this->m_Emp_Num];
	// ���Ѵ������ļ����ݴ洢��������
	this->init_Emp();

	// ���Դ���
	//for (int i = 0; i < this->m_Emp_Num; i++)
	//{
	//	cout << "ְ�����:" << this->m_Emp_Arr[i]->m_Id
	//		<< "����:" << this->m_Emp_Arr[i]->m_Name
	//		<< "���ű��:" << this->m_Emp_Arr[i]->m_DepId << endl;
	//}

	
}


WorkerManager::~WorkerManager()
{
	// �ͷŶ������ݣ����������ֶ������ֶ��ͷ�
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
	cout << "**********��ӭʹ��ְ������ϵͳ*********" << endl;
	cout << "************0.�˳��������*************" << endl;
	cout << "************1.����ְ����Ϣ*************" << endl;
	cout << "************2.��ʾְ����Ϣ*************" << endl;
	cout << "************3.ɾ����ְְ��*************" << endl;
	cout << "************4.�޸�ְ����Ϣ*************" << endl;
	cout << "************5.����ְ����Ϣ*************" << endl;
	cout << "************6.���ձ������*************" << endl;
	cout << "************7.��������ĵ�*************" << endl;
	cout << "***************************************" << endl;
}

void WorkerManager::exit_System()
{
	cout << "�����˳�ϵͳ����ӭ�´�ʹ�ã�����" << endl;
	// �����������
	system("pause");
	// �˳�����
	exit(0);
}

void WorkerManager::Add_Emp()
{
	cout << "���������ְ��������" << endl;
	// �����û�����������
	int add_num;
	cin >> add_num;
	if (add_num > 0)
	{
		// ���
		// ��������¿ռ��С
		int newSize = this->m_Emp_Num + add_num; // �¿ռ�����=ԭ����¼����+��������

		// �����¿ռ�
		Worker** newspace = new Worker * [newSize];

		// ��ԭ���ռ��µ����ݿ������¿ռ���
		if (this->m_Emp_Arr != NULL)
		{
			for (int i = 0; i < this->m_Emp_Num; i++)
			{
				newspace[i] = this->m_Emp_Arr[i];
			}
		}

		// ���������
		for (int i = 0; i < add_num; i++)
		{
			int id;      // ְ�����
			string name; //ְ������
			int dSelect;   //����ѡ��
			cout << "�������" << i + 1 << "����ְ�����" << endl;
			cin >> id;
			cout << "�������" << i + 1 << "����ְ������" << endl;
			cin >> name;
			cout << "�������ְ����λ" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
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

			// ������ְ��ְ��,���浽������
			newspace[this->m_Emp_Num + i] = worker;
			
		}
		// �ͷ�ԭ�пռ�
		delete[] this->m_Emp_Arr;
		this->m_Emp_Arr = NULL;

		// ��������ָ��
		this->m_Emp_Arr = newspace;

		// ����ְ������
		this->m_Emp_Num = newSize;


		// ���������ļ���Ϊ��
		this->m_FileEmpty = false;

		cout << "�ɹ����" << add_num << "����ְ��" << endl;

		// �������ݵ��ļ���
		this->save();
	}
	else
	{
		cout << "������������" << endl;
	}

	// ��������������ص��ϼ�Ŀ¼
	system("pause");
	system("cls");

}


void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);    // ������ķ�ʽ���ļ���д�ļ�

	// ��ÿ���˵�����д���ļ���
	for (int i = 0; i < this->m_Emp_Num; i++)
	{
		// �������������������д��
		ofs << this->m_Emp_Arr[i]->m_Id << " "
			<< this->m_Emp_Arr[i]->m_Name << " "
			<< this->m_Emp_Arr[i]->m_DepId << endl;
	}
	// �ر��ļ�
	ofs.close();
}

int  WorkerManager::get_Emp_Num()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);  // ���ļ���  ��

	int id;
	string name;
	int depid;

	int num = 0;

	// ���������������
	while (ifs >> id && ifs >> name && ifs >> depid)
	{
		// ͳ������
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
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < m_Emp_Num; i++)
		{
			// ���ö�̬���ýӿ�
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
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		// ����ְ�����ɾ��
		cout << "��������Ҫɾ����ְ����ţ�" << endl;
		int id;
		cin >> id;
		int index = this->IsExist(id);
		
		if (index != -1) // ְ���壬����Ҫɾ��������indexλ���ϵ�ְ��
		{
			// �����е�����ǰ��
			for (int i = index; i < this->m_Emp_Num-1; i++)
			{
				this->m_Emp_Arr[i] = this->m_Emp_Arr[i + 1];
			}
			// ��Ա������һ
			this->m_Emp_Num--;

			// ����ͬ�����µ��ļ���
			this->save();
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "δ�ҵ���ְ����ɾ��ʧ��" << endl;
		}
	}
	system("pause");
	system("cls");
}

// ����ְ������ж��Ƿ���ڣ��������򷵻�ְ���������е�λ�ã����򷵻�-1
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


// �޸�ְ��
void WorkerManager::Modify_Emp_Info()
{
	// ����ְ������޸�
	cout << "��������Ҫ�޸ĵ�ְ����ţ�" << endl;
	int id;
	cin >> id;
	int index = this->IsExist(id);
	if (index != -1)
	{
		// ɾ�������ж�Ӧλ�õ�����
		delete this->m_Emp_Arr[index];
		this->m_Emp_Arr[index] = nullptr;

		int newid;
		string newName;
		int newDepid;

		cout << "��Ը�ְԱ����Ϣ��������" << endl;
		cout << "�±��Ϊ:" << endl;
		cin >> newid;

		cout << "������:" << endl;
		cin >> newName;

		cout << "�������ְ����λ" << endl;
		cout << "1.��ְͨ��" << endl;
		cout << "2.����" << endl;
		cout << "3.�ϰ�" << endl;
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

		// �����ݱ����������
		this->m_Emp_Arr[index] = worker;
		
		cout << "�޸ĳɹ�" << endl;

		// ���浽�ļ���
		this->save();
	}
	else
	{
		cout << "δ�ҵ���ְ�����޷��޸�" << endl;
	}
}


// ����ְ��
void WorkerManager::fin_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������ҷ�ʽ:" << endl;
		cout << "1.��ְ����Ų���" << endl;
		cout << "2.����������" << endl;

		int select;
		cin >> select;

		if (select == 1)
		{
			int id;
			cout << "������ְ�����" << endl;
			cin >> id;

			int ret = this->IsExist(id);
			if (ret != -1)
			{
				cout << "���ҳɹ�����Ϣ���£�" << endl;
				this->m_Emp_Arr[ret]->showInfo();
			}
			else
			{
				cout << "���޴���" << endl;
			}
		}
		else if (select == 2)
		{
			string name;
			cout << "������ְ������" << endl;
			cin >> name;

			// ���ҵ��ı�־
			bool flag = false;
			for (int i = 0; i < this->m_Emp_Num; i++)
			{
				if (this->m_Emp_Arr[i]->m_Name == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ"
						<< this->m_Emp_Arr[i]->m_Id << endl;
					flag = true;
					this->m_Emp_Arr[i]->showInfo();
				}
			}

			if (flag == false)
			{
				// ���޴���
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else
		{
			cout << "��������" << endl;

		}
	}
	system("pause");
	system("cls");
}

// ְ���������
void WorkerManager::Sort_Empid()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��ѡ������ʽ:" << endl;
		cout << "1.��ְ���Ž�������" << endl;
		cout << "2.��ְ���Ž��н���" << endl;
		int select;
		cin >> select;

		for (int i = 0; i < this->m_Emp_Num; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < this->m_Emp_Num; j++)
			{
				if (select == 1)
				{
					// ����
					if (this->m_Emp_Arr[minOrMax]->m_Id > this->m_Emp_Arr[j]->m_Id)
					{
						minOrMax = j;
					}
				}

				else
				{
					// ����
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
		cout << "����ɹ�,������Ϊ��" << endl;
		this->Show_Emp_Info();
		this->save();
	}
	system("pause");
	system("cls");
}

// ����ļ�
void WorkerManager::Clean_File()
{
	cout << "ȷ����գ�" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;
	int select;
	cin >> select;
	if (select == 1)
	{
		// ��ģʽ ios::trunc:���������ɾ���ļ������´���
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		// ����������ݲ�Ϊ�գ����ֶ��ͷŶ����ڴ棡����
		if (this->m_Emp_Arr != NULL)
		{
			for (int i = 0; i < this->m_Emp_Num; i++)
			{
				if (this->m_Emp_Arr[i] != NULL)
				{
					// �ͷ�����Ԫ���ڶ������ڴ棡����
					delete this->m_Emp_Arr[i];
					this->m_Emp_Arr[i] = nullptr;
				}
			}
			this->m_Emp_Num = 0;
			// �ͷ������ڶ������ڴ�
			delete[] this->m_Emp_Arr;
			this->m_Emp_Arr = nullptr;
			this->m_FileEmpty = true;

		}
		cout << "����ɹ�" << endl;

	}
	system("pause");
	system("cls");
}