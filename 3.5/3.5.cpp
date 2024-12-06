#include<iostream>
using namespace std;
int a(int n)
{
	if (n == 10)
	{
		return 1;
	}
	else
	{
		int m = 0;
		m = (a(n + 1) + 1) * 2;
		return m;
	}
}
int main()
{
	cout << a(1) << endl;
	return 0;
}