// 防止头文件重复包含
#pragma once
#include<iostream>
using namespace std;

#include "03_worker.h"
#include "04_employee.h"
#include "05_manager.h"
#include "06_boss.h"
#include <fstream>

#define FILENAME "expFile.txt"
class WorkerManager
{
public:
	// 构造函数
	WorkerManager();

	// 展示菜单
	void Show_Menu();

	// 退出系统
	void exit_System();

	// 记录职工的人数
	int m_Emp_Num;

	// 职工数组指针   Worker ** arry = new Worker* [5]
	Worker** m_Emp_Arr;
	
	// 添加职工
	void Add_Emp();

	// 保存数据到文件中
	void save();

	// 判断expFile.txt文件是否为空  标志
	bool m_FileEmpty;

	// 统计人数
	int get_Emp_Num();

	// 初始化员工
	void init_Emp();

	// 显示职工
	void Show_Emp_Info();

	// 删除职工
	void Delete_Emp_Info();

	// 根据职工编号判断是否存在，若存在则返回职工在数组中的位置，否则返回-1
	int IsExist(int id);

	// 修改职工
	void Modify_Emp_Info();

	// 查找职工
	void fin_Emp();

	// 职工编号排序
	void Sort_Empid();

	// 清空文件
	void Clean_File();

	// 析构函数
	~WorkerManager();
};