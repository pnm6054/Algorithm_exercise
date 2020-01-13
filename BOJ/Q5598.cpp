#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		printf("%c", (s[i] - 42) % 26 + 'A');
	}
	cout << endl;
	return 0;
}