#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	list<string> p, s, r;
	string t;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		p.push_back(t);
		s.push_back(t);
	}
	s.sort();
	r.assign(s.begin(), s.end());
	reverse(r.begin(), r.end());
	if (p == s) cout << "INCREASING" << endl;
	else if (p == r) cout << "DECREASING" << endl;
	else cout << "NEITHER" << endl;
	return 0;
}