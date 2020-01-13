#include <iostream>
using namespace std;

int main(void)
{
	int t, b;
	cin >> t;
	while (t--)
	{
		cin >> b;
		for (int i = 0; i < b; i++)
		{
			for (int j = 0; j < b; j++)
			{
				if (i == 0 || j == 0 || i == b - 1 || j == b - 1) cout << "#";
				else cout << "J";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}