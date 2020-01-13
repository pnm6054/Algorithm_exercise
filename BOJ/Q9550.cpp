#include <iostream>
using namespace std;

int main(void)
{
	int t, n, k, c, sum;
	cin >> t;
	while (t--)
	{
		sum = 0;
		cin >> n >> k;
		while (n--)
		{
			cin >> c;
			sum += int(c / k);
		}
		cout << sum << endl;
	}
	return 0;
}