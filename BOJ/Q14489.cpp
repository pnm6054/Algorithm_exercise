#include <iostream>
using namespace std;

int main(void)
{
	long long a = 0, b = 0, c = 0, ans = 0, ch = 0;
	cin >> a >> b >> c;
	if ((a + b) >= (c * 2))
		cout << a + b - c * 2;
	else
		cout << a + b;
	return 0;
}