#include<iostream>
using namespace std;
int main()
{
	double m = 0.8, n = 1, sum = 0, aver = 0.8;
	for (int i = 1; i < 7; i++)
	{
		n = n * 2;
		sum = sum + m * n;
		aver = sum / i;
	}
	cout << "每天平均花" << aver << "元。" << endl;
}