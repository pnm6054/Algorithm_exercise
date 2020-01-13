#include <iostream>
using namespace std;

int main(void)
{
	int t, p, q, a, b, tmp;
	cin >> p >> q;
	if (p < q)
	{
		tmp = p;
		p = q;
		q = tmp;
	}
	a = p;
	b = q;
	while (b)
	{
		tmp = b;
		b = a % tmp;
		a = tmp;
	}
	cout << a << endl << p * q / a << endl;
	return 0;
}