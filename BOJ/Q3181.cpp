#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(void)
{
	bool b;
	string s, str, res(""), e[10] = { "i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili" };
	getline(cin, s);
	stringstream ss(s);
	ss >> str;
	cout << char(str[0] - 32);
	while (ss >> str)
	{
		b = true;
		for (int i = 0; i < 10; i++)
			if (!str.compare(e[i]))
			{
				b = false;
				break;
			}
		if (b)
			cout << char(str[0] - 32);
	}
	return 0;
}