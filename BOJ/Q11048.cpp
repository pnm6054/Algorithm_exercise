#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, m, **mz, t;
	cin >> n >> m;
	mz = new int*[n];
	for (int i = 0; i < n; i++)
	{
		mz[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &t);
			mz[i][j] = t;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == 0 && j == 0) continue;
			else if (i == 0) mz[i][j] += mz[i][j - 1];
			else if (j == 0) mz[i][j] += mz[i - 1][j];
			else mz[i][j] += max(mz[i][j - 1], mz[i - 1][j]);
		}
	}
	cout << mz[n - 1][m - 1] << endl;
	return 0;
}