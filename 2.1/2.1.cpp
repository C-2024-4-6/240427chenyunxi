#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "������һ���ַ���";
	cin >> a;
	int ascii = (int)a;
	if (ascii > 96)
	{
		cout << "���ַ���дΪ��" << (char)(a - 32) << endl;
	}
	else
	{
		cout << "���ַ�����ַ���ASCIIֵΪ��" << (int)(a + 1) << endl;
	}
}