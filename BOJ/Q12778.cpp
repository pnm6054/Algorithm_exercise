#include <iostream>
using namespace std;

int main(void)
{
	int t, m, n;
	char c, w;
	cin >> t;
	while (t--)
	{
		cin >> m >> c;
		if (c == 'C')
		{
			for (int i = 0; i < m; i++)
			{
				cin >> w;
				cout << w - 64 << " ";
			}
			cout << endl;
		}
		if (c == 'N')
		{
			for (int i = 0; i < m; i++)
			{
				cin >> n;
				cout << (char)(n + 64) << " ";
			}
			cout << endl;
		}
	}
	return 0;
}