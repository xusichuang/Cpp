#include<iostream>
using namespace std;

// CPU
class CPU
{
public:

	virtual void calculate() = 0;
};

// �Կ�
class VideoCard
{
public:
	virtual void display() = 0;
};

// �ڴ�
class Memory
{
public:
	virtual void storage() = 0;
};


// ������
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

	// �ṩ�����������ͷ�����ڴ�
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
	// CPU�����ָ��
	CPU* m_cpu;
	// �Կ������ָ��
	VideoCard* m_vc;
	// �ڴ��������ָ��
	Memory* m_mem;
};


// ���峧��
// Interl
class InterlCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Interl��CPU��ʼ����" << endl;
	}
};

// Ӣΰ��
class NVIDIA :public VideoCard
{
public:
	virtual void display()
	{
		cout << "NVIDIA�Կ���ʾ����" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "�ڴ�����ʼ����" << endl;
	}
};




void test321()
{
	// ���ø���ָ��ָ�����ഴ�����
	CPU* c1 = new InterlCPU;
	VideoCard* vc1 = new NVIDIA;
	Memory* m1 = new IntelMemory;

	// ��������
	Computer* computer1 = new Computer(c1, vc1, m1);
	computer1->work();
	delete computer1;
	// ��ʱֻ�ͷ���Computer���ڴ�   û���ͷ�������ڴ�

}

int main32()
{
	test321();
	return 0;
}