#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, k, a ,b;
	cin >> n >> k;
	while (k--)
	{
		cin >> a >> b;
		cout << (min({ a,n - a + 1,b,n - b + 1 }) - 1) % 3 + 1 << '\n';
	}
	return 0;
}