#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int len, min, n, k = 1;
	cin >> n;
	getline(cin, s);
	while (n--)
	{
		getline(cin, s);
		len = s.length();
		int a[26] = {0};
		min = 4;
		cout << "Case " << k++ << ": ";
		for (int i = 0; i < len; i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z') a[s[i] - 65]++;
			else if (s[i] >= 'a' && s[i] <= 'z') a[s[i] - 97]++;
		}
		for (int i = 0; i < 26; i++)
			if (min > a[i]) min = a[i];
		switch (min)
		{
			case 3: cout << "Triple pangram!!!" << endl; break;
			case 2: cout << "Double pangram!!" << endl; break;
			case 1: cout << "Pangram!" << endl; break;
			case 0: cout << "Not a pangram" << endl;
		}			
	}
	return 0;
}