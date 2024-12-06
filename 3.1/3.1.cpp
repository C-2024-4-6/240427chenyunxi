#include<iostream>
using namespace std;
int a(int& x, int& y)
{
	while (y != 0)
	{
		int w;
		w = y;
		y = x % y;
		x = w;
	}
	return x;
}
int b(int x, int y)
{
	int i = x, j = y;
	int z = a(x, y);
	int w = (i * j) / z;
	return w;
}
int main()
{
	int m, n;
	cout << "请输入自然数m,n：";
	cin >> m >> n;
	int x = m, y = n;
	cout << "m,n的最大公约数为：" << a(m, n) << endl;
	cout << "m,n的最小公倍数为：" << b(x, y) << endl;
	return 0;
}