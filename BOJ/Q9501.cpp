#include <iostream>
using namespace std;

int main(void)
{
	int t, n, d, v, f, c, r;
	cin >> t;
	while (t--)
	{
		cin >> n >> d;
		r = 0;
		while (n--)
		{
			cin >> v >> f >> c;
			if (double(d) <= double(v) * (double(f) / double(c))) r++;
		}
		cout << r << endl;
	}
	return 0;
}