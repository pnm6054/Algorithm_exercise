#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t;
	string x, y;
	cin >> t;
	while (t--)
	{
		cin >> x >> y;
		cout << "Distances:";
		for (int i = 0; i < x.length(); i++)
		{
			if (y[i] >= x[i]) cout << " " << y[i] - x[i];
			else cout << " " << (y[i] + 26) - x[i];
		}
		cout << endl;
	}
	return 0;
}