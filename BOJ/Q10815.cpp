#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, x;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a[i] = x;
	}
	sort(a.begin(), a.end());
	cin >> m;
	while(m--)
	{
		cin >> x;
		if (binary_search(a.begin(), a.end(), x))
			cout << '1';
		else
			cout << '0';
		cout << ' ';
	}
	return 0;
}