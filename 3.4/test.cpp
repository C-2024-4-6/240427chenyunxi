#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "�����������ε����߳���";
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3) == 1)
	{
		cout << "�������ε����Ϊ��" << area(side1, side2, side3) << endl;
	}
	else
	{
		cout << "�������룡" << endl;
	}
	return 0;
}