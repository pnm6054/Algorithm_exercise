#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s, ns, k;
	int l;
	cin >> s >> k;
	l = s.length();
	for (int i = 0; i < l; i++)
		if (!(s[i] >= '0' && s[i] <= '9')) ns.push_back(s[i]);
	cout << (ns.find(k) != string::npos);
	return 0;
}