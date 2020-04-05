#include <iostream>
using namespace std;

int main(void)
{
	int t, max, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		max = 0;
		for (int j = 0; j < 10; j++)
		{
			cin >> n;
			if (n > max)
				max = n;
		}
		cout << "#" << i + 1 << " " << max << '\n';
	}
	return 0;
}