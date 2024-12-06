#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)
{
	int n = strlen(hexString);
	int m = 0;
	for (int i = n-1; i >= 0; i--)
	{
		if (hexString[i] >= '0' && hexString[i] <= '9')
		{
			m += (hexString[i] - '0') * pow(16, n - 1 - i);
		}
		else if (hexString[i] >= 'A' && hexString[i] <= 'F')
		{
			m += (hexString[i] - 'A' + 10) * pow(16, n - 1 - i);
		}
		else if (hexString[i] >= 'a' && hexString[i] <= 'f')
		{
			m += (hexString[i] - 'a' + 10) * pow(16, n - 1 - i);
		}
		else
		{
			cout << "Invalid input!" << endl;
			return -1;
		}
	}
	return m;
}
int main()
{
	char hexString[100] = {};
	cout << "Enter the hexString:";
	cin.getline(hexString, 100);
	cout << "The decimal result is:" << parseHex(hexString) << endl;
}