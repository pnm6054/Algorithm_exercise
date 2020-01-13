#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int bsearch(vector<int> v, int k)
{
	int h = v.size(), p, l = 0;
	while (h == l)
	{
		p = (h - l - 1) / 2;
		if (k == v[p])
			return k;
		else if (k < v[p])
			h = p;
		else
			l = p;
	}
	return l;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, k, n;
	ll res;
	vector<ll> st, g1, g2;
	cin >> t;
	while (t--)
	{
		cin >> k >> n;
		g1.clear();
		g2.clear();
		st.clear();
		d = 333333333;
		for (int i = 0; i < n; i++)
		{
			cin >> v;
			st.push_back(v);
		}
		for (int i = 0; i < n; i++)
		{
			cin >> v;
			for (vector<int>::iterator it = st.begin(); it != st.end(); it++)
				g1.push_back(v + *it);
		}
		st.clear();
		for (int i = 0; i < n; i++)
		{
			cin >> v;
			st.push_back(v);
		}
		for (int i = 0; i < n; i++)
		{
			cin >> v;
			for (vector<int>::iterator it = st.begin(); it != st.end(); it++)
				g2.push_back(v + *it);
		}
		sort(g2.begin(), g2.end());
		for (vector<int>::iterator it = g1.begin(); it != g1.end(); it++)
		{
			if (binary_search(g2.begin(), g2.end(), k - *it))
			{
				cout << "yy" << k << '\n';
				d = 0;
				break;
			}
			else
			{
				cout << "nn" << *it << '\n';
				d = 0;
				break;
			}
		}
	}
	return 0;
}