#include<iostream>
using namespace std;
int main()
{
	double r, h, V;
	const double p = 3.14;
	cout << "��ֱ�����Բ׶�ĵ���뾶���ߣ�";
	cin >> r >> h;
	V = (p * r * r * h) / 3;
	cout << "��Բ׶�����Ϊ��" << V << endl;
	return 0;
}