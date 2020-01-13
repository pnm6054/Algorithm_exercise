#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string r;
	int n, b, t;
	cin >> n >> b;
	while (n)
	{
		t = n % b;
		if (t > 9) r.push_back(char(t + 55));
		else r.push_back(char(t + 48));
		n /= b;
	}
	reverse(r.begin(), r.end());
	cout << r << endl;
	return 0;
}