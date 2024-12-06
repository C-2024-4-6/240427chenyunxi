#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int a = 0;
	for (int i = num - 1; i > 1; i--)
	{
		if (num % i== 0)
		{
			a = 0;
			break;
		}
		else
		{
			a = 1;
		}
	}
	return a;
}
int main()
{
	int a[200] = {2,};
	int i = 1, j = 3;
	while (i < 200)
	{
		if (is_prime(j) == 1)
		{
			a[i] = j;
			i++;
		}
		j++;
	}
	int k = 0;
	for (int i = 1; i < 21; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			cout << a[k] << "\t";
			k++;
		}
		cout << endl;
	}
	return 0;
}