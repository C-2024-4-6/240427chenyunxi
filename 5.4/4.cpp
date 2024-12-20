#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	int id;
	int score;
public:
	Student(int i, int s)
	{
		id = i;
		score = s;
	}
	int set_id()
	{
		return id;
	}
	int set_score()
	{
		return score;
	}
};
void max(Student* students)
{
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (students[i].set_score() > students[max].set_score())
		{
			max = i;
		}
	}
	cout << "五个学生中成绩最高者学号为：" << students[max].set_id();
}
int main()
{
	Student students[5] = {Student(1,77),Student(5,55),Student(6,66),Student(2,88),Student(8,99)};
	max(students);
	return 0;
}