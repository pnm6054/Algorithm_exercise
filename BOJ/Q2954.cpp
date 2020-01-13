#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	bool t;
	string s;
	char v[5] = { 'a','e','i','o','u' };
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		t = false;
		for (int j = 0; j < 5; j++)
			if (s[i] == v[j]) t = true;
		cout << s[i];
		if (t) i += 2;
	}
	return 0;
}