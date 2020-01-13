#include <iostream>
using namespace std;

int main(void)
{
	unsigned long long t, a, b;
	cin >> a >> b;
	while (b)
	{
		t = b;
		b = a % t;
		a = t;
	}
	for (int i = 0; i < a; i++)
		cout << 1;
	return 0;
}