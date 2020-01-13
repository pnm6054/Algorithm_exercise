#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void)
{
	int t, f, b;
	string s, s1, s2;
	cin >> t;
	while (t--)
	{
		cin >> s;
		s1 = s.substr(0, 3);
		s2 = s.substr(4);
		f = ((s1[0] - 65) * 26 * 26) + ((s1[1] - 65) * 26) + ((s1[2] - 65) * 1);
		b = stoi(s2);
		if (abs(f - b) <= 100)
			cout << "nice" << endl;
		else
			cout << "not nice" << endl;
	}
	return 0;
}