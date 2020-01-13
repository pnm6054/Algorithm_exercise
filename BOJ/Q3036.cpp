#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int tmp;
	if (a < b)
		swap(a, b);
	while (b)
	{
		tmp = b;
		b = a % tmp;
		a = tmp;
	}
	return a;
}

int main(void)
{
	int n, fr, rs, g;
	cin >> n >> fr;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> rs;
		g = gcd(fr, rs);
		cout << fr / g << "/" << rs / g << endl;
	}
	return 0;
}