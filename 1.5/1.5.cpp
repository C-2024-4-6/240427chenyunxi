#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double t, T;
	cout << "请输入华氏温度：";
	cin >> t;
	T = (t - 32) / 1.8;
	cout << "对应的摄氏温度为：" << fixed << setprecision(2) << T << endl;
}