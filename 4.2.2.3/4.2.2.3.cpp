#include<iostream>
using namespace std;
void sort(int* a,int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int k = 0;
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
}
int main()
{
	int n;
	cout << "������Ԫ�ظ���������Ԫ�أ�";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, n);
	cout << "���������Ϊ��";
	for (int i = 0; i < n; i++)
	{
		cout << *(a + i) << " ";
	}
	delete[] a;
	return 0;
}