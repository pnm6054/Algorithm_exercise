#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string a, b, o;
	bool f, s, r;
	cin >> a >> o >> b;
	f = (a == "true" ? true : false);
	s = (b == "true" ? true : false);
	if (o == "AND")
		r = f && s;
	else
		r = f || s;
	if (r) cout << "true";
	else cout << "false";
	return 0;
}