#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(void)
{
	int n, m, v, **a, s, e;
	cin >> n >> m >> v;
	a = new int*[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			a[i][j] = 0;
		}
	}
	for (int i = 0; i < m; i++)
	{
		cin >> s >> e;
		a[s - 1][e - 1] = 1;
		a[e - 1][s - 1] = 1;
	}
	return 0;
}