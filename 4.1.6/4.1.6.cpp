#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[])
{
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (s[i] == (char)('a' + j) || s[i] == (char)('A' + j))
			{
				counts[j]++;
			}
		}
	}
}
int main()
{
	char s[100]; 
	int counts[26] = {};
	cout << "Enter a string:";
	cin.getline(s, 100);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] > 0)
		{
			cout << (char)('a' + i) << ":" << counts[i] << "times" << endl;
		}
	}
}