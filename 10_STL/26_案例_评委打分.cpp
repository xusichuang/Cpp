#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<algorithm>
// 5λѡ��  ABCDE,10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷壬ȥ����ͷ֣���ȡƽ����

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

// ����ѡ��
void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);

		// �������õĶ���Ž�����
		v.push_back(p);
	}
}

// ���
void setScore(vector<Person>& v)
{
	// ����ί�ķ���������deque������
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{

			int score = rand() % 41 + 60;   // 60~100
			d.push_back(score);
		}
		cout << "������" << it->m_name << "���" << endl;
		for (deque<int>::const_iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;

		// ����
		sort(d.begin(), d.end());

		// ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (int i = 0; i < d.size(); i++)
		{
			sum += d[i];
		}

		double avg = sum / d.size();

		// ��ƽ���ָ�ֵ��ѡ��
		it->m_score = avg;
	}
	
}

int main26()
{
	// 1.����5��ѡ��
	vector<Person> v;     //���ѡ������
	createPerson(v);

	

	// 2.��5��ѡ�ִ��
	setScore(v);


	// 3.��ʾ���÷�
	for (int i = 0; i < v.size(); i++)
	{
		cout << "������" << v[i].m_name << " " << "���շ�����" << v[i].m_score << endl;
	}
	return 0;
}