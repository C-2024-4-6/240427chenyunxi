#include<iostream>
using namespace std;
int main()
{
	double r, h, V;
	const double p = 3.14;
	cout << "请分别输入圆锥的底面半径、高：";
	cin >> r >> h;
	V = (p * r * r * h) / 3;
	cout << "该圆锥的体积为：" << V << endl;
	return 0;
}