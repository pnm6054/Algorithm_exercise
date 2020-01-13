#include <iostream>
using namespace std;

int main(void)
{
	int t, s, n, p, q;
	cin >> t;
	while (t--)
	{
		cin >> s >> n;
		while (n--)
		{
			cin >> q >> p;
			s += q * p;
		}
		cout << s << endl;
	}
	return 0;
}