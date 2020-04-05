#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int t, n, e, max;
	vector<int> v;
	cin >> t;
	while (t--)
	{
		cin >> n;
		v.assign(1000, 0);
		max = 0;
		for (int i = 0; i < 1000; i++)
		{
			cin >> e;
			v[e]++;
			if (v[e] > max) max = v[e];
		}
		for (int i = 999; i >= 0; i--)
		{
			if (v[i] == max) cout << "#" << n << " " << i << '\n';
		}
	}
	return 0;
}
