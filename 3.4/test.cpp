#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "请输入三角形的三边长：";
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3) == 1)
	{
		cout << "该三角形的面积为：" << area(side1, side2, side3) << endl;
	}
	else
	{
		cout << "错误输入！" << endl;
	}
	return 0;
}