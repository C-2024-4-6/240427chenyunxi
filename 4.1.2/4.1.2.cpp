#include<iostream>
using namespace std;
void swap(double* a, double* b)
{
	double c;
	c = *a;
	*a = *b;
	*b = c;
}
void sort(double a[])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
}
int main()
{
	double a[10] = {};
	cout << "������10������";
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	cout << "���к������Ϊ��";
	sort(a);
	return 0;
}