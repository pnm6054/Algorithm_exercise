#include <iostream>
using namespace std;

int main(void)
{
	int a = 100, b = 100;
	int t, n, m;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		if (n < m) a -= m;
		else if (n > m) b -= n;
	}
	cout << a << endl << b << endl;
	return 0;
}