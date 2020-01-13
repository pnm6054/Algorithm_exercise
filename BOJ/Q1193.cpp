#include <iostream>
using namespace std;

int main(void)
{
	int x, i = 0, sum = 0, r = 0;
	cin >> x;
	while (1)
	{
		i++;
		sum += i;
		if (sum >= x) break;
	}
	r = sum - x + 1;
	if (i % 2)
		cout << r << "/" << i - r + 1 << '\n';
	else
		cout << i - r + 1 << "/" << r << '\n';
	return 0;
}