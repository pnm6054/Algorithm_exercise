#include <iostream>
using namespace std;

int main(void)
{
	int n, k;
	cin >> n >> k;
	n++, k++;
	long long ** b = new long long*[n];
	for (int i = 0; i < n; i++)
	{
		b[i] = new long long[i + 1];
		if (i == 0)
			b[i][0] = 1;
		else if (i == 1)
			b[i][0] = 1, b[i][1] = 1;
		else
		{
			for (int j = 0; j < i + 1 && j < k + 1; j++)
			{
				if (j == 0 || i == j) b[i][j] = 1;
				else b[i][j] = b[i - 1][j - 1] + b[i - 1][j];
				b[i][j] %= 10007;
			}
		}
	}
	cout << b[n - 1][k - 1] << endl;
	return 0;
}