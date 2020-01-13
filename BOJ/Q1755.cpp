#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

bool comp(const string& f, const string& s)
{
	int a[10] = { 10, 5, 9, 8, 3, 2, 7, 6, 1, 4 }, mx;
	mx = max(f.length(), s.length());
	for (int i = 0; i < mx; i++)
		if (f[i] != s[i]) return a[f[i] - 48] < a[s[i] - 48];
}

int main(void)
{
	int m, n, i = 0;
	list<string> l;
	cin >> m >> n;
	for (int i = m; i <= n; i++)
		l.push_back(to_string(i));
	l.sort(comp);
	for (list<string>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
		if (++i % 10 == 0) cout << endl;
	}
	return 0;
}