#include<iostream>

using namespace std;

class Cube
{
private:

	// ��
	int m_length;
	// ��
	int m_width;
	// ��
	int m_height;

public:
	void input_attribute(int length,int width,int height)
	{
		m_length = length;
		m_width = width;
		m_height = height;
	}
	int get_Cube_area()
	{
		int area = 2 * m_length * m_width + 2 * m_length * m_height + 2 * m_width * m_height;
		return area;
	}

	int get_Cube_volume()
	{
		int volume = m_length * m_width * m_height;
		return volume;
	}
};

int main06()
{
	Cube c1;
	c1.input_attribute(1, 1, 1);
	cout << "�����������" << c1.get_Cube_area() << endl;
	cout << "�����������" << c1.get_Cube_volume() << endl;
	return 0;
}