#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, s, *a;
	cin >> n >> s;
	a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	return 0;
}