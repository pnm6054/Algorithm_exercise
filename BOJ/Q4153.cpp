#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	while (1)
	{
		cin >> a >> b >> c;
		if (a == b && b == c && c == 0) break;
		else
		{
			if (a >= b && a >= c)
			{
				if ((a * a) == (b * b + c * c)) cout << "right" << endl;
				else cout << "wrong" << endl;
			}
			else if (b >= a && b >= c)
			{
				if ((b * b) == (a * a + c * c)) cout << "right" << endl;
				else cout << "wrong" << endl;
			}
			else if (c >= a && c >= b)
			{
				if ((c * c) == (b * b + a * a)) cout << "right" << endl;
				else cout << "wrong" << endl;
			}
		}
	}
	return 0;
}