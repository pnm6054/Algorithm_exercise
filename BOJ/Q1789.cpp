#include <iostream>
#define SUM(a) (a * a + a) / 2
using namespace std;

int main(void)
{
	unsigned long s, n = 0, r = 0;
	cin >> s;
	while (1)
	{
		if (SUM(r) > s) break;
		else r++;
	}
	cout << r - 1 << endl;
	return 0;
}