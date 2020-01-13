#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n, p, c, max;
	string s, mp;
	cin >> n;
	while (n--)
	{
		max = 0;
		cin >> p;
		while (p--)
		{
			cin >> c >> s;
			if (c > max)
			{
				mp = s;
				max = c;
			}
		}
		cout << mp << endl;
	}
	return 0;
}