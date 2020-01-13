#include <iostream>
using namespace std;

int main(void)
{
	long long ans, n;
	cin >> n;
	n--;
	ans = 5 + (14 + (n - 1) * 3) * n / (long long)2;
	cout << ans % 45678 << endl;
	return 0;
}