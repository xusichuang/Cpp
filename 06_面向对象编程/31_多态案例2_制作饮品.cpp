#include<iostream>
using namespace std;


// 流程：煮水->冲泡->倒入杯子->加入辅料
class AbstractDrinking
{
public:
	// 煮水
	virtual void boil() = 0;

	// 冲泡
	virtual void brew() = 0;

	// 倒入杯中
	virtual void PourIntoCup() = 0;

	// 加入辅料
	virtual void AddSomething() = 0;

	// 制作饮品
	void make()
	{
		boil();
		brew();
		PourIntoCup();
		AddSomething();
	}
};



// 制作咖啡
class Coffe :public AbstractDrinking
{
	// 煮水
	virtual void boil()
	{
		cout << "煮自来水" << endl;
	}

	// 冲泡
	virtual void brew()
	{
		cout << "冲泡咖啡" << endl;
	}

	// 倒入杯中
	virtual void PourIntoCup()
	{
		cout << "倒入杯中" << endl;
	}

	// 加入辅料
	virtual void AddSomething()
	{
		cout << "加入牛奶和糖" << endl;
	}
};


// 茶
class Tea :public AbstractDrinking
{
	// 煮水
	virtual void boil()
	{
		cout << "煮自来水" << endl;
	}

	// 冲泡
	virtual void brew()
	{
		cout << "冲泡茶叶" << endl;
	}

	// 倒入杯中
	virtual void PourIntoCup()
	{
		cout << "倒入杯中" << endl;
	}

	// 加入辅料
	virtual void AddSomething()
	{
		cout << "加入枸杞和菊花" << endl;
	}
};
// 制作
void dowork1(AbstractDrinking* abs)
{
	abs->make();
	// new开辟的堆区要及时释放，指针指向空！！！
	delete abs;
	abs = nullptr;
}
void dowork2(AbstractDrinking& abs)
{
	abs.make();
}

void test311()
{
	// new开辟的堆区要及时释放，指针指向空
	dowork1(new Tea);
	Coffe m;
	// 制作咖啡
	dowork2(m);
}

int main31()
{
	test311();
	return 0;
}