#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int t, r;
	vector<int> v;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		v.assign(10, 0);
		r = 0;
		for (int j = 0; j < 10; j++)
			cin >> v[j];
		sort(v.begin(), v.end());
		for (int j = 1; j < 9; j++)
			r += v[j];
		printf("#%d %.0f\n", i, (double)r / 8);
	}
	return 0;
}