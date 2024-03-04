#include <iostream>
using namespace std;

int main30()
{
	// 1.提升用户打分
	cout << "请给电影打分" << endl;
	// 2.用户开始进行打分
	int score;
	cin >> score;
	cout << "电影的评分为" << score << endl;

	switch (score)
	{
	case 10:
		cout << "这是一部经典电影" << endl;
		// 退出当前分支
		break;
	case 9:
		cout << "评价较高的电影" << endl;
		break;
	default:
		cout << "这是一部烂片" << endl;
		break;
	}
	// switch缺点:判断的时候只能是整形或者字符型，不可以是区间！！！
	// switch优点：结构清晰，比if else运行效率高

	return 0;
}