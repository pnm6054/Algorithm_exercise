#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v;
	int t, s, res;
	while (1)
	{
		cin >> t;
		if (t != -1)
		{
			res = 0;
			v.clear();
			while (1)
			{
				v.push_back(t);
				cin >> t;
				if (!t) break;
			}
			s = v.size();
			for (int i = 0; i < s; i++)
			{
				for (int j = 0; j < s; j++)
				{
					if (v[i] == 2 * v[j]) res++;
				}
			}
			cout << res << '\n';
		}
		else break;
	}
	return 0;
}