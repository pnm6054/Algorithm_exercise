#include <iostream>
using namespace std;

int main(void)
{
	int n, m, sum = 0, min = 0, c = 0;
	cin >> n >> m;
	for (int i = n; i <= m; i++)
	{
		for (int j = 2; j < i; j++)
			if ((c = i % j) == 0) break;
		if (i == 2) c = 1;
		if (c)
		{
			if (min == 0) min = i;
			sum += i;
		}
	}
	if (sum == 0) cout << -1 << endl;
	else cout << sum << endl << min << endl;
	return 0;
}