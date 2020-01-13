#include <iostream>
using namespace std;

int main(void)
{
	int n, k = 0;
	cin >> n;
	long long m, *e = new long long[n], t;
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		e[i] = t;
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (e[i] && e[j] && (e[i] + e[j] == m))
			{
				e[i] = e[j] = 0;
				k++;
			}
		}
	}
	cout << k << endl;
	return 0;
}