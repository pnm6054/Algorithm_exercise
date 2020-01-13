#include <iostream>
using namespace std;

int main(void)
{
	long long a, b, c, r;
	cin >> a >> b >> c;
	r = (a * 6916 + b * 4845 + c * 4200) % 7980;
	if (r) cout << r << endl;
	else cout << 7980 << endl;
	return 0;
}