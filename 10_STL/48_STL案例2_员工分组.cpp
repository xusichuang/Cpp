#include<iostream>
using namespace std;
/*
公司招聘了10个员工(ABCDEFGHIJ)，10名员工进入公司后，需要指派员工在哪个部门工作
员工信息：姓名、工资；部门分为策划、美术研发
随机给10名员工分配部门和工资
通过multimap进行信息插入  key（部门编号）value（员工）
分部门显示员工信息

*/


/*
实现步骤：
1.创建10名员工，放到vector中
2.遍历vector容器中，取出每个员工，进行随机分组
3.分组后，将员工部门编号作为key，具体员工作为value，放入multimap容器中
4.分部门显示员工信息
*/

#include<map>
#include<vector>
#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
	string m_Name;
	int m_Salary;

};

void createWorker(vector<Worker>& v)
{
	string NameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker wk;
		wk.m_Name = "员工";
		wk.m_Name += NameSeed[i];
		wk.m_Salary = rand() % 10000 + 10000;		// 10000~19999
		v.push_back(wk);
	}
}

void printWorker(vector<Worker>& v)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << it->m_Name << "  工资：" << it->m_Salary << endl;
	}
}

void setGroup(vector<Worker>& v,multimap<int,Worker>& mp)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门编号
		int depid = rand() % 3;	// 0 1 2
		mp.insert({ depid, *it });
	}
}
void showWorkerInfo(multimap<int, Worker>& mp)
{
	cout << "策划部门：" << endl;
	multimap<int,Worker>::iterator pos=mp.find(0);
	// 统计策划具体人数
	int cnt = mp.count(CEHUA);
	int index = 0;
	for (; pos != mp.end() && index<cnt; pos++,index++)
	{
		cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
	}

	cout << "美术部门：" << endl;
	pos = mp.find(MEISHU);
	cnt = mp.count(MEISHU);
	index = 0;
	for (; pos != mp.end() && index < cnt; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
	}

	cout << "研发部门：" << endl;
	pos = mp.find(YANFA);
	cnt = mp.count(YANFA);
	index = 0;
	for (; pos != mp.end() && index < cnt; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
	}

}

int main()
{
	// 设置随机数生成器的种子，通常使用当前时间
	srand(static_cast<unsigned int>(time(nullptr)));

	// 1.创建员工
	vector<Worker> vWorker;
	createWorker(vWorker);
	printWorker(vWorker);
	// 2.员工分组
	// <编号，员工>
	multimap<int,Worker> mp;
	setGroup(vWorker, mp);

	// 3.分组显示员工
	showWorkerInfo(mp);

	return 0;
}