#include <iostream>
using namespace std;

int main(void)
{
	int t, k, n;
	cin >> t;
	while (t--)
	{
		cin >> k >> n;
		k++;
		int **a = new int*[k];
		for (int i = 0; i < k; i++) a[i] = new int[n];
		for (int i = 0; i < k; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0) a[i][j] = j + 1;
				else if (j == 0) a[i][j] = 1;
				else a[i][j] = a[i - 1][j] + a[i][j - 1];
			}
		}
		cout << a[k-1][n-1] << endl;
	}
	return 0;
}