#include <iostream>
using namespace std;

int main(void)
{
	int t, n, *v, max, d, r, total;
	cin >> t;
	while (t--)
	{
		max = 0, d = 0, total = 0;
		cin >> n;
		v = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
			total += v[i];
			if (v[i] > max)
			{
				max = v[i];
				r = i;
				d = 0;
			}
			else if (max == v[i])
				d = 1;
		}
		if (max > total / 2)
			cout << "majority winner " << r + 1 << endl;
		else
		{
			if (d) cout << "no winner" << endl;
			else cout << "minority winner " << r + 1 << endl;
		}
			
	}
}