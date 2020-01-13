#include <iostream>
using namespace std;

int main(void)
{
	int t, x1, y1, r1, x2, y2, r2;
	while (t--)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if (x1 == x2 && y1 == y2)
		{
			if (r1 == r2) cout << -1 << endl;
			else cout << 0 << endl;
		}
		else
		{

		}
	}
	return 0;
}