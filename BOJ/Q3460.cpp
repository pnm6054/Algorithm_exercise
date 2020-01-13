#include <iostream>
using namespace std;

int main(void)
{
	int t, i, j;
	cin >> t;
	while (t--)
	{
		j = 0;
		cin >> i;
		while (i != 1)
		{
			if (i % 2 == 1) cout << j << " ";
			j++;
			i /= 2;
		}
		if (i % 2 == 1) cout << j << endl;
	}
	return 0;
}