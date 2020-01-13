#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n, len;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "String #" << i + 1 << endl;
		cin >> s;
		len = s.length();
		for (int j = 0; j < len; j++)
			if (s[j] == 'Z') cout << 'A';
			else printf("%c", s[j] + 1);
		cout << endl << endl;
	}
	return 0;
}