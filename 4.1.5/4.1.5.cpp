#include<iostream>
#include<string>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int i = 0, j = 0;
	int n1 = strlen(s1), n2 = strlen(s2);
	while (n1 <= n2 - j)
	{
		int k = 0;
		for (i; i < n1; i++)
		{
			if (s1[i] != s2[i + j])
			{
				j++;
				k = -1;
			}
		}
		if (k==0)
		{
			return j;
		}
	}
	return -1;
}
int main()
{
	char s1[100] = {}, s2[100] = {};
	cout << "Enter the first string:";
	cin.getline(s1,100);
	cout << "Enter the second string:";
	cin.getline(s2, 100);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is " << indexOf(s1, s2);
}