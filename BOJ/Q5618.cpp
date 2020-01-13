#include <iostream>
using namespace std;

int main(void)
{
	int n;
	long long a, b, c;
	cin >> n;
	if (n == 2)
	{
		cin >> a >> b;
		for (int i = 1; i < (a < b ? a : b); i++)
		{
			if ((a % i == 0) && (b % i == 0)) cout << i << endl;
		}
	}
	else
	{
		cin >> a >> b >> c;
		for (int i = 1; i < (((a < b ? a : b) < (a < c ? a : c)) ? (a < b ? a : b) : (a < c ? a : c)); i++)
		{
			if ((a % i == 0) && (b % i == 0) && (c % i == 0)) cout << i << endl;
		}
	}
	return 0;
}