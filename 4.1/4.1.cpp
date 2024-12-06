#include<iostream>
using namespace std;
int main()
{
	int a[10] = {};
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int i = 9; i >-1; i--)
	{
		for (int j = i-1; j >-1; j--)
		{
			if (a[i] == a[j])
			{
				a[i] = 0;
			}
		}
	}
	cout << "The distinct numbers are:";
	for (int i = 0; i < 10; i++)
	{
		if (a[i] != 0)
		{
			cout << a[i] << " ";
		}
	}
	return 0;
}