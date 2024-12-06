#include<iostream>
using namespace std;
bool change(bool a)
{
	if (a)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	bool a[100] ;
	for (int i = 0; i < 100; i++)
	{
		a[i] = false;
	}
	for (int i = 1; i < 101; i++)
	{
		if (i == 1)
		{
			for (int j = 0; j < 100; j++)
			{
				a[j] = true;
			}
		}
		else
		{
			for (int n = 0; n < 100; n++)
			{
				if ((n + 1) % i == 0)
				{
					a[n] = change(a[n]);
				}
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (a[i])
		{
			cout << i + 1 << " ";
		}
	}
	return 0;
}