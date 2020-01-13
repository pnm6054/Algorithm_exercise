#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string *s, *ss;
	char t;
	bool e = true;
	int n, m;
	cin >> n >> m;
	s = new string[n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> t;
			s[i].push_back(t);
			s[i].push_back(t);
		}
	}
	ss = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ss[i];
		if (s[i] != ss[i]) e = false;
	}
	if (e) cout << "Eyfa" << endl;
	else cout << "Not Eyfa" << endl;
	return 0;
}