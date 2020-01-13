#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int l, sum = 0;
	bool p = true;
	cin >> s;
	l = s.length();
	for (int i = 0; i < l; i++)
	{
		if (s[i] >= 'a') sum += (s[i] - 96);
		else sum += (s[i] - 38);
	}
	if (sum % 2 == 0)
		cout << "It is not a prime word.";
	else
	{
		for (int i = 3; i < sum / 2 + 2; i += 2)
		{
			if (sum % i == 0)
				p = false;
		}
		if (p) cout << "It is a prime word.";
		else cout << "It is not a prime word.";
	}
	return 0;
}