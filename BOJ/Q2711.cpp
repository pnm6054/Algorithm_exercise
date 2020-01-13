#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int t, i;
	char * s = new char[80];
	cin >> t;
	while (t--)
	{
		cin >> i >> s;
		for (int k = 0; k < strlen(s); k++) 
			if (k != i - 1) cout << s[k];
		cout << endl;
	}
	return 0;
}