#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<algorithm>
// 5位选手  ABCDE,10个评委分别对每一名选手打分，去除最高峰，去除最低分，再取平均分

class Person
{
public:
	string m_name;
	int m_score;

	Person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;

	}
};

// 创建选手
void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);

		// 将创建好的对象放进容器
		v.push_back(p);
	}
}

// 打分
void setScore(vector<Person>& v)
{
	// 将评委的分数，放入deque容器中
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{

			int score = rand() % 41 + 60;   // 60~100
			d.push_back(score);
		}
		cout << "姓名：" << it->m_name << "打分" << endl;
		for (deque<int>::const_iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;

		// 排序
		sort(d.begin(), d.end());

		// 去掉最高分和最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (int i = 0; i < d.size(); i++)
		{
			sum += d[i];
		}

		double avg = sum / d.size();

		// 将平均分赋值给选手
		it->m_score = avg;
	}
	
}

int main26()
{
	// 1.创建5名选手
	vector<Person> v;     //存放选手容器
	createPerson(v);

	

	// 2.给5名选手打分
	setScore(v);


	// 3.显示最后得分
	for (int i = 0; i < v.size(); i++)
	{
		cout << "姓名：" << v[i].m_name << " " << "最终分数：" << v[i].m_score << endl;
	}
	return 0;
}