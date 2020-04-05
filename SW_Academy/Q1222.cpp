#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	char * exp, *postfix;
	stack<char> op;
	stack<int> ex;
	int n, j = 0, a, b, res;
	for (int tc = 1; tc <= 10; tc++)
	{
		cin >> n;
		exp = new char[n];
		postfix = new char[n];
		cin >> exp;
		while (!op.empty())
			op.pop();
		while (!ex.empty())
			ex.pop();
		j = 0;
		for (int i = 0; i < n; i++)
		{
			if (exp[i] >= '0' && exp[i] <= '9')
			{
				postfix[j] = exp[i];
				j++;
			}
			else
				op.push(exp[i]);
		}
		while (!op.empty())
		{
			postfix[j] = op.top();
			op.pop();
			j++;
		}
		postfix[j] = 0;
		j = 0;
		while (1)
		{
			if (postfix[j] <= '9' && postfix[j] >= '0')
				ex.push(postfix[j] - 48);
			else
			{
				b = ex.top();
				ex.pop();
				a = ex.top();
				ex.pop();
				if (postfix[j] == '+')
					ex.push(a + b);
			}
			j++;
			if (j == n) break;
		}
		res = ex.top();
		cout << "#" << tc << " " << res << '\n';
	}
	return 0;
}