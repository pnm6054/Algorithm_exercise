#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	string s, e;
	set<string> c;
	cin >> n;
	while (n--)
	{
		cin >> s >> e;
		if (e == "leave")
			c.erase(s);
		else
			c.insert(s);
	}
	for (set<string>::reverse_iterator it = c.rbegin(); it != c.rend(); it++)
		cout << *it << "\n";
	return 0;
}