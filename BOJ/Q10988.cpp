#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int p = 1;
	char * s = new char[100];
	cin >> s;
	for (int i = 0; i < strlen(s) / 2; i++)
		if (s[i] != s[strlen(s) - i - 1])
		{
			p = 0;
			break;
		}
	cout << p << endl;
	return 0;
}