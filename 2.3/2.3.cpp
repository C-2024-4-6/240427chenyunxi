#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三角形的三边长：";
	cin >> a >> b >> c;
	if (a + b > c&& a + c > b&& b + c > a)
	{
		cout << "周长为：" << a + b + c << endl;
		if (a == b || b == c || a == c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "不能构成三角形" << endl;
	}
}