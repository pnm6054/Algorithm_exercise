#include <iostream>
using namespace std;

int main(void)
{
	long long n, i = 1, j = 1;
	cin >> n;
	while (i < n)
	{
		i = 3 * j * (j + 1) + 1;
		j++;
	}
	cout << j << endl;
	return 0;
}