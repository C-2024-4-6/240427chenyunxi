#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point()
	{
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "×ø±êÖµÎª£º(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p1;
	p1.display();
	p1.setPoint(6, 8);
	p1.display();
	return 0;
}