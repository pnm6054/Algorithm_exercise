#include <iostream>
using namespace std;

int main(void)
{
	int a, b, i = 0, n = 0, sum = 0;
	cin >> a >> b;
	while (++i)
	{
		for (int j = 0; j < i; j++)
		{
			n++;
			if (n >= a && n <= b) sum += i;
		}
		if (n > b) break;
	}
	cout << sum << endl;
	return 0;
}