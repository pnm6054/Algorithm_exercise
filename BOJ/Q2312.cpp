#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, k, index;
	cin >> t;
	while (t--)
	{
		map<int, int> mp;
		k = 2;
		cin >> n;
		while (n != 1)
		{
			if (n % k == 0)
			{
				mp[k]++;
				n /= k;
			}
			else
			{
				k++;
				index = k;
			}
		}
		map<int, int>::iterator it;
		for (it = mp.begin(); it != mp.end(); it++)
			cout << it->first << " " << it->second << '\n';
	}
	return 0;
}