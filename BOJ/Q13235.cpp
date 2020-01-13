#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string s, r;
	cin >> s;
	r.assign(s);
	reverse(r.begin(), r.end());
	if (r == s) cout << "true" << endl;
	else cout << "false" << endl;
	return 0;
}