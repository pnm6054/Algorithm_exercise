#include <iostream>
using namespace std;

int main(void)
{
	int t, s, a, sum = 0;
	cin >> t;
	while (t--)
	{
		cin >> s >> a;
		sum += a % s;
	}
	cout << sum << endl;
	return 0;
}