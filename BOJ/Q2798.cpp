#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, m, max = 0;
	cin >> n >> m;
	vector<int> c(n);
	for (int i = 0; i < n; i++)
		cin >> c[i];
	sort(c.begin(), c.end());
	for (int i = 0; i < n - 2; i++)
		for (int j = i + 1; j < n - 1; j++)
			for (int k = j + 1; k < n; k++)
				if (c[i] + c[j] + c[k] <= m)
					if (max < c[i] + c[j] + c[k])
						max = c[i] + c[j] + c[k];
	cout << max << endl;
	return 0;
}