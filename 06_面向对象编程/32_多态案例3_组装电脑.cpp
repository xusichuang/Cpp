#include<iostream>
using namespace std;

// CPU
class CPU
{
public:

	virtual void calculate() = 0;
};

// 显卡
class VideoCard
{
public:
	virtual void display() = 0;
};

// 内存
class Memory
{
public:
	virtual void storage() = 0;
};


// 电脑类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	// 提供析构函数，释放零件内存
	~Computer()
	{
		if (m_cpu != nullptr)
		{
			delete m_cpu;
			m_cpu = nullptr;
		}

		if (m_vc != nullptr)
		{
			delete m_vc;
			m_vc = nullptr;
		}

		if (m_mem != nullptr)
		{
			delete m_mem;
			m_mem = nullptr;
		}
	}

private:
	// CPU的零件指针
	CPU* m_cpu;
	// 显卡的零件指针
	VideoCard* m_vc;
	// 内存条的零件指针
	Memory* m_mem;
};


// 具体厂商
// Interl
class InterlCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Interl的CPU开始计算" << endl;
	}
};

// 英伟达
class NVIDIA :public VideoCard
{
public:
	virtual void display()
	{
		cout << "NVIDIA显卡显示内容" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "内存条开始储存" << endl;
	}
};




void test321()
{
	// 利用父类指针指向子类创建零件
	CPU* c1 = new InterlCPU;
	VideoCard* vc1 = new NVIDIA;
	Memory* m1 = new IntelMemory;

	// 创建电脑
	Computer* computer1 = new Computer(c1, vc1, m1);
	computer1->work();
	delete computer1;
	// 此时只释放了Computer的内存   没有释放零件的内存

}

int main32()
{
	test321();
	return 0;
}