#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "�����������ε����߳���";
	cin >> a >> b >> c;
	if (a + b > c&& a + c > b&& b + c > a)
	{
		cout << "�ܳ�Ϊ��" << a + b + c << endl;
		if (a == b || b == c || a == c)
		{
			cout << "��������Ϊ����������" << endl;
		}
		else
		{
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else
	{
		cout << "���ܹ���������" << endl;
	}
}