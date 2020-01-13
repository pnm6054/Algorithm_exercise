#include <iostream>
#define S(a) a * a
using namespace std;

int main(void)
{
	int n, m, s = 0, min = 0, t = 1;
	cin >> n >> m;
	for (int i = n; i < m + 1; i++)
	{
		while (S(t) <= i)
		{
			if (S(t) == i)
			{
				if (min == 0) min = S(t);
				s += S(t);
			}
			t++;
		}
	}
	if (s == 0) cout << -1 << endl;
	else cout << s << endl << min << endl;
}