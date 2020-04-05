#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(void)
{
	vector<vector<int>> v;
	stack<int> stk;
	vector<int> flag(100, 0);
	int t, n, a, b, ve, we, res;
	for (int tc = 1; tc <= 10; tc++)
	{
		while (!stk.empty())
			stk.pop();
		v.assign(100, vector<int>(2, 100));
		flag.assign(100, 0);
		cin >> t >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			for (int j = 0; j < 2; j++)
			{
				if (v[a][j] == 100)
				{
					v[a][j] = b;
					break;
				}
			}
		}
		ve = 0;
		we = 0;
		flag[ve] = 1;
		while (1)
		{
			if (v[ve][0] != 100)
			{
				we = v[ve][0];
				v[ve][0] = 100;
				stk.push(ve);
			}
			else if (v[ve][1] != 100)
			{
				we = v[ve][1];
				v[ve][1] = 100;
				stk.push(ve);
			}
			while (we != 100)
			{
				flag[we] = 1;
				stk.push(we);
				ve = we;
				we = 100;
				if (v[ve][0] != 100)
				{
					we = v[ve][0];
					v[ve][0] = 100;
					stk.push(ve);
				}
				else if (v[ve][1] != 100)
				{
					we = v[ve][1];
					v[ve][1] = 100;
					stk.push(ve);
				}
			}
			if (!stk.empty())
			{
				ve = stk.top();
				stk.pop();
			}
			else break;
		}
		if (flag[99]) res = 1;
		else res = 0;
		cout << "#" << tc << " " << res << '\n';
	}
	return 0;
}