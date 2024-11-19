#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "请输入一个字符：";
	cin >> a;
	int ascii = (int)a;
	if (ascii > 96)
	{
		cout << "该字符大写为：" << (char)(a - 32) << endl;
	}
	else
	{
		cout << "该字符后继字符的ASCII值为：" << (int)(a + 1) << endl;
	}
}