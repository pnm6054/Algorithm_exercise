#include <iostream>
using namespace std;

int main(void)
{
	int n, **a, t;
	cin >> t;
	for (int p = 1; p <= t; p++)
	{
		cin >> n;
		a = new int*[n];
		cout << "#" << p << '\n';
		for (int i = 0; i < n; i++)
		{
			a[i] = new int[n];
			for (int j = 0; j <= i; j++)
			{
				if (j == 0 || i == j) a[i][j] = 1;
				else a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}