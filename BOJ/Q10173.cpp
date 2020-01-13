#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s, n = "NEMO";
	int len;
	while (1)
	{
		getline(cin, s);
		len = s.length();
		if (!s.compare("EOI")) break;
		for (int i = 0; i < len; i++)
			if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
		if (s.find("NEMO") <= len) cout << "Found" << endl;
		else cout << "Missing" << endl;
	}
	return 0;
}