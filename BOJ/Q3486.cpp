#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, ia, ib;
	string a, b, r;
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		ia = stoi(a);
		ib = stoi(b);
		ia += ib;
		r.assign(to_string(ia));
		reverse(r.begin(), r.end());
		ia = stoi(r);
		cout << ia << '\n';
	}
	return 0;
}