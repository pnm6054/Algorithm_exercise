#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

bool comp(const string &a, const string &b)
{
	int sa, sb, la = a.length(), lb = b.length();
	if (la != lb)
		return la < lb;
	else
	{
		sa = 0, sb = 0;
		for (int i = 0; i < la; i++)
		{
			if (a[i] >= '0' && a[i] <= '9')
				sa += (a[i] - 48);
			if (b[i] >= '0' && b[i] <= '9')
				sb += (b[i] - 48);
		}
		if (sa != sb)
			return sa < sb;
		else
		{
			for (int i = 0; i < la; i++)
				if (a[i] != b[i]) return a[i] < b[i];
		}
	}
}

int main(void)
{
	int n;
	string s;
	bool(*fn)(const string&, const string&) = comp;
	set<string, bool(*)(const string&, const string&)> serial(fn);
	cin >> n;
	while (n--)
	{
		cin >> s;
		serial.insert(s);
	}
	for (set<string>::iterator it = serial.begin(); it != serial.end(); it++)
		cout << *it << endl;
	return 0;
}