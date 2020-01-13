#include <iostream>
using namespace std;

int main(void)
{
	bool b = true;
	long long i;
	cin >> i;
	while (i > 1)
	{
		if (i % 2 == 1)
		{
			b = false;
			break;
		}
		i /= 2;
	}
	if (b) cout << 1 << endl;
	else cout << 0 << endl;
	return 0;
}