#include <iostream>
using namespace std;

int main(void)
{
	int * a = new int[5];
	int m = 0, sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		if (a[i] > a[m]) m = i;
		sum += a[i];
	}
	a[m] = 0;
	for (int i = 0; i < 5; i++) if (a[i] > a[m]) m = i;
	a[m] = 0;
	for (int i = 0; i < 5; i++) if (a[i] > a[m]) m = i;
	cout << sum / 5 << endl << a[m] << endl;
	return 0;
}