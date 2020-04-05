#include <iostream>
using namespace std;

int main(void)
{
	int t, a, b;
	char c;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		if (a > b)
			c = '>';
		else if (a < b)
			c = '<';
		else
			c = '=';
		cout << "#" << i + 1 << " " << c << '\n';
	}
	return 0;
}