#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string s;
	cin >> s;
	if (s.length() == 1) cout << s << endl;
	else
	{
		if (!(s.substr(0, 2)).compare("0x")) cout << stoi(s.substr(2), nullptr, 16) << endl;
		else if (s[0] == '0') cout << stoi(s.substr(1), nullptr, 8) << endl;
		else cout << s << endl;
	}
	return 0;
}