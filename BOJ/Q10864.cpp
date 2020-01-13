#include <iostream>
using namespace std;

int main(void)
{
	int n, m, a, b;
	cin >> n >> m;
	int * f = new int[n + 1];
	for (int i = 0; i < n + 1; i++) f[i] = 0;
	while (m--)
	{
		cin >> a >> b;
		f[a]++;
		f[b]++;
	}
	for (int i = 1; i < n + 1; i++)
		cout << f[i] << endl;
	return 0;
}