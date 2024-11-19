#include<iostream>
using namespace std;
int main()
{
	float x=1,y=1;
	cout << "x=";
	cin >> x;
	if (x > 0)
	{
		if (x < 1)
		{
			y = 3 - 2 * x;
			cout << "y=" << y << endl;
		}
		else if (x < 5)
		{
			y = 2 / (4 * x) + 1;
			cout << "y=" << y << endl;
		}
		else if(x<10)
		{
			y = x * x;
			cout << "y=" << y << endl;
		}
	}
}