#include <iostream>
using namespace std;

int main(void)
{
	int n, m, *b, x, y;
	cin >> n >> m;
	b = new int[n + 1];
	for (int i = 1; i < n + 1; i++)
		b[i] = i;
	while (m--)
	{
		cin >> x >> y;
		swap(b[x], b[y]);
	}
	for (int i = 1; i < n + 1; i++)
		cout << b[i] << " ";
	return 0;
}