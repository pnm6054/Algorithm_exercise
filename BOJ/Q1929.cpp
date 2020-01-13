#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n, m;
	scanf("%d %d", &m, &n);
	vector<int> p(n + 1, 0);
	p[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; i * j <= n; j++)
		{
			p[i * j] = 1;
		}
	}
	for (int i = m; i <= n; i++)
		if (!p[i]) printf("%d\n", i);
	return 0;
}