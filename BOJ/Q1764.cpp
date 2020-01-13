#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, m, l;
	string s;
	scanf("%d %d", &n, &m);
	vector<string> v(n), r;
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	for (int i = 0; i < m; i++)
	{
		cin >> s;
		if (binary_search(v.begin(), v.end(), s))
		{
			r.push_back(s);
		}
	}
	sort(r.begin(), r.end());
	l = r.size();
	cout << l << endl;
	for (int i = 0; i < l; i++)
		cout << r[i] << endl;
	return 0;
}