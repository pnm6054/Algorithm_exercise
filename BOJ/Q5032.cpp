#include <iostream>
using namespace std;

int main(void)
{
	int e, f, c, r = 0, rm, n;
	cin >> e >> f >> c;
	e += f;
	while (1)
	{
		if (e < c)
			break;
		r += e / c;
		e = e % c + e / c;
	}
	cout << r;
	return 0;
}