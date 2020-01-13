#include <iostream>
#include <utility>
using namespace std;

int main(void)
{
	long long a, b, p, q, t;
	cin >> a >> b;
	p = a, q = b;
	while (q)
	{
		if (p < q) swap(p, q);
		t = q;
		q = p % q;
		p = t;
	}
	cout << a * b / p << endl;
	return 0;
}