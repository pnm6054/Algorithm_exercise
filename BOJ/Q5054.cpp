#include <iostream>
using namespace std;

int main(void)
{
	int max, min, t, n, x;
	cin >> t;
	while (t--)
	{
		max = 0, min = 99;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			if (x > max) max = x;
			if (x < min) min = x;
		}
		cout << 2 * (max - min) << endl;
	}
	return 0;
}