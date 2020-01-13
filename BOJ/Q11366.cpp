#include <iostream>
using namespace std;

int main(void)
{
	int p[2], t;
	while (1)
	{
		cin >> p[0] >> p[1] >> t;
		if (p[0] == 0 && p[1] == 0 && t == 0) break;
		for (int i = 0; i < t; i++)
		{
			p[i % 2] = p[0] + p[1];
		}
		cout << p[(t - 1) % 2] << '\n';
	}
	return 0;
}