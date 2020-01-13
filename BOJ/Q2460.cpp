#include <iostream>
using namespace std;

int main(void)
{
	int o, i, m = 0, n = 0;
	for (int k = 0; k < 10; k++)
	{
		cin >> o >> i;
		n = n - o + i;
		if (m < n) m = n;
	}
	cout << m << endl;
	return 0;
}