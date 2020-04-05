#include <iostream>
using namespace std;

int main(void)
{
	int t, n, r;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		r = 0;
		for (int j = 0; j < 10; j++)
		{
			cin >> n;
			r += n;
		}
		printf("#%d %.0f\n", i + 1, r / 10.0);
	}
	return 0;
}