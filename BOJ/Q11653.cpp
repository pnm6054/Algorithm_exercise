#include <iostream>
using namespace std;

int main(void)
{
	int n, i = 2;
	cin >> n;
	while (n != 1)
	{
		if (n % i == 0)
		{
			cout << i << endl;
			n /= i;
			i = 2;
		}
		else i++;
	}
	return 0;
}