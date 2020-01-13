#include <iostream>
using namespace std;

int main(void)
{
	int c, k, p, res = 0;
	cin >> c >> k >> p;
	for (int i = 1; i <= c; i++)
		res += (k * i + p * i * i);
	cout << res;
	return 0;
}