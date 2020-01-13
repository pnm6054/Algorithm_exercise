#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(void)
{
	char * s = new char[1000000];
	int * a = new int[26];
	cin >> s;
	int max = 0, len = strlen(s);
	for (int i = 0; i < len; i++) 
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			a[s[i] - 97]++;
			if (a[s[i] - 97] > a[max]) max = s[i] - 97;
		}
		else
		{
			a[s[i] - 65]++;
			if (a[s[i] - 65] > a[max]) max = s[i] - 65;
		}
	}
	for (int i = 0; i < 26; i++)
		if (a[i] == a[max] && i != max)
		{
			max = -2;
			break;
		}
	printf("%c\n", max + 65);
	return 0;
}