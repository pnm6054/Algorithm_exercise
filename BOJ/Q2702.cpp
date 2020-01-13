#include <iostream>
using namespace std;

int main(void)
{
	int t, A, B, a, b, g, tmp;
	cin >> t;
	while (t--)
	{
		cin >> A >> B;
		a = A, b = B;
		while (a != 0)
		{
			if (a < b)
			{
				tmp = a;
				a = b;
				b = tmp;
			}
			a %= b;
		}
		cout << A * B / b << " " << b << endl;
	}
	return 0;
}