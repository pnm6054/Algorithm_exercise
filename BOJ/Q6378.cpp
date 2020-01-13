#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string n;
	int s, l;
	while (1)
	{
		cin >> n;
		if (n == "0") break;
		while (1)
		{
			s = 0;
			l = n.length();
			if (l == 1) break;
			for (int i = 0; i < l; i++)
			{
				s += (n[i] - 48);
			}
			n.assign(std::to_string(s));
		}
		cout << n << '\n';
	}
	return 0;
}