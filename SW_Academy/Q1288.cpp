#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int t, n, l, m, tn;
	vector<int> v;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		v.assign(10, 0);
		l = 0;
		m = 0;
		cin >> n;
		while (l < 10)
		{
			m++;
			tn = n * m;
			while (1)
			{
				if (v[tn % 10] == 0)
				{
					l++;
					v[tn % 10]++;
				}
				tn = tn / 10;
				if (!tn) break;
			}
		}
		cout << "#" << i << " " << n * m << '\n';
	}
	return 0;
}