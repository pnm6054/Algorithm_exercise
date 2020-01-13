#include <iostream>
using namespace std;

int main(void)
{
	int t, i = 0, tf, sc = 0;
	cin >> t;
	while (t--)
	{
		cin >> tf;
		if (tf)
		{
			i++;
			sc += i;
		}
		else
			i = 0;
	}
	cout << sc << endl;
	return 0;
}