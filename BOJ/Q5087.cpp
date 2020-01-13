#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int c, t;
	string s;
	while (1)
	{
		c = 0, t = 0;
		while (1)
		{
			cin >> s;
			if (s == "A" || s == "3" || s == "5" || s == "7" || s == "9")
				c++;
			else if (s == "2" || s == "4" || s == "6" || s == "8" || s == "10")
				t++;
			else break;
		}
		if (s == "#") break;
		else if (c < t) cout << "Tania" << '\n';
		else if (c > t) cout << "Cheryl" << '\n';
		else cout << "Draw" << '\n';
	}
	return 0;
}