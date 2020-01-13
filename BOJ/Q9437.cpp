#include <iostream>
using namespace std;

int main(void)
{
	int n, p, t, s;
	while (1)
	{
		cin >> n;
		if (!n) break;
		else
		{
			cin >> p;
			if (p < n / 2)
			{
				t = (p % 2 == 0) ? p - 1 : p + 1;
				if (p % 2)
					cout << t << " " << n - t + 1 << " " << n - p + 1 << endl;
				else
					cout << t << " " << n - p + 1 << " " << n - t + 1 << endl;
			}
			else if (p == n / 2)
			{
				t = p - 1;
				cout << t << " " << n - p + 1 << " " << n - t + 1 << endl;
			}
			else if (p == n / 2 + 1)
			{
				t = p + 1;
				cout << n - t + 1 << " " << n - p + 1 << " " << t << endl;
			}
			else
			{
				t = (p % 2 == 0) ? p - 1 : p + 1;
				if (p % 2)
					cout << n - t + 1 << " " << n - p + 1 << " " << t << endl;
				else
					cout << n - p + 1 << " " << n - t + 1 << " " << t << endl;
			}
		}
	}
	return 0;
}