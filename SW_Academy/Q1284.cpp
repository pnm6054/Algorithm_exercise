#include <iostream>
using namespace std;

int main(void)
{
	int t, p, q, r, s, w;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> p >> q >> r >> s >> w;
		p *= w;
		if (w > r)
			q += ((w - r) * s);
		cout << "#" << i << " " << (p < q ? p : q) << '\n';
	}
	return 0;
}