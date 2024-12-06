#include<iostream>
#include<string>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int n1, n2, i = 0, j = 0;
	n1 = strlen(s1);
	n2 = strlen(s2);
	while (n1 <= n2 - j)
	{
		int k = 0;
		for (i = 0; i < n1; i++)
		{
			if (s1[i] != s2[i + j])
			{
				j++;
				k = -1;
			}
		}
		if (k == 0)
		{
			return j;
		}
	}
	return -1;
}
int main()
{
	char s1[100] = {};
	char s2[100] = {};
	cout << "Enter the first string:";
	cin.getline(s1, 100);
	cout << "Enter the second string:";
	cin.getline(s2, 100);
	cout << "indexof(\"" << s1 << "\",\"" << s2 << "\") is " << indexof(s1, s2);
	return 0;
}