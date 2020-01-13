#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n;
	string s;
	cin >> n;
	while (n--)
	{
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] < 97) printf("%c", s[i] + 32);
			else cout << s[i];
		}
		cout << endl;
	}
	return 0;
}