#include <iostream>
using namespace std;

int max(int a, int b)
{
	return (a > b ? a : b);
}

int main(void)
{
	int l, *a, mx, r;
	for (int i = 1; i <= 10; i++)
	{
		cin >> l;
		r = 0;
		mx = 0;
		a = new int[l];
		for (int j = 0; j < l; j++)
			cin >> a[j];
		for (int j = 2; j < l - 2; j++)
		{
			mx = max(max(a[j - 1], a[j - 2]), max(a[j + 1], a[j + 2]));
			if (a[j] > mx)
				r += a[j] - mx;
		}
		cout << "#" << i << " " << r << endl;
	}
	return 0;
}