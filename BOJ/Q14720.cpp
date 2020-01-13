#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a = 3, t, s = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		if (t == 0 && a == 3)
		{
			s++;
			a = t;
		}
		else if (t == 1 && a == 0)
		{
			s++;
			a = t;
		}
		else if (t == 2 && a == 1)
		{
			s++;
			a = t;
		}
		else if (t == 0 && a == 2)
		{
			s++;
			a = t;
		}
	}
	cout << s;
	return 0;
}