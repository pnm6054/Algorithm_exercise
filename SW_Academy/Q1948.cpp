#include <iostream>
using namespace std;

int main(void)
{
	int t, m1, d1, m2, d2, m[] = { 0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> m1 >> d1 >> m2 >> d2;
		cout << "#" << i << " " << m[m2] + d2 - m[m1] - d1 + 1 << '\n';
	}
	return 0;
}