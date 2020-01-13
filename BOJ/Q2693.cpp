#include <iostream>
using namespace std;

int main(void)
{
	int t, m = 0, e;
	int * a;
	cin >> t;
	while (t--)
	{
		a = new int[10];
		for (int i = 0; i < 10; i++)
		{
			cin >> a[i];
			if (a[i] > a[m]) m = i;
		}
		a[m] = 0;
		for (int j = 0; j < 10; j++)
			if (a[j] > a[m]) m = j;
		a[m] = 0;
		for (int j = 0; j < 10; j++)
			if (a[j] > a[m]) m = j;
		cout << a[m] << endl;
	}
	return 0;
}