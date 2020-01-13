#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string a, b, c, d;
	long long r = 0;
	cin >> a >> b >> c >> d;
	a += b;
	c += d;
	r = stoll(a);
	r += stoll(c);
	cout << r << "\n";
	return 0;
}