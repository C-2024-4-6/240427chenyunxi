#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double t, T;
	cout << "�����뻪���¶ȣ�";
	cin >> t;
	T = (t - 32) / 1.8;
	cout << "��Ӧ�������¶�Ϊ��" << fixed << setprecision(2) << T << endl;
}