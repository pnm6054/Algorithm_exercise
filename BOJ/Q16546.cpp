#include <iostream>
using namespace std;

int main(void)
{
	int n, *r, f;
	cin >> n;
	r = new int[n + 1];
	for (int i = 0; i < n + 1; i++)
		r[i] = 1;
	for (int i = 1; i < n; i++)
	{
		cin >> f;
		r[f] = 0;
	}
	for (int i = 1; i < n + 1; i++)
		if (r[i]) cout << i << endl;
	return 0;
}