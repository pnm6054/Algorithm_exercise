#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, **t;
	scanf("%d", &n);
	t = new int*[n];
	for (int i = 0; i < n; i++)
	{
		t[i] = new int[i + 1];
		for (int j = 0; j < i + 1; j++)
		{
			scanf("%d", &t[i][j]);
			if (!i) break;
			else if (!j) t[i][j] += t[i - 1][j];
			else if (j == i) t[i][j] += t[i - 1][j - 1];
			else t[i][j] += max(t[i - 1][j], t[i - 1][j - 1]);
		}
	}
	cout << *max_element(t[n-1],t[n-1]+n) << endl;
	return 0;
}