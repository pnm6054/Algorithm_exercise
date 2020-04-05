#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	stack<char> stk;
	string s;
	int len, av;
	for (int tc = 1; tc <= 10; tc++)
	{
		cin >> len >> s;
		av = 1;
		while (!stk.empty())
			stk.pop();
		for (int i = 0; i < len; i++)
		{
			if (s[i] == '(' || s[i] == '{' || s[i] == '[' || s[i] == '<')
				stk.push(s[i]);
			else if (s[i] == ')')
			{
				if (stk.top() == '(')
					stk.pop();
				else
				{
					av = 0;
					break;
				}
			}
			else if (s[i] == ']')
			{
				if (stk.top() == '[')
					stk.pop();
				else
				{
					av = 0;
					break;
				}
			}
			else if (s[i] == '}')
			{
				if (stk.top() == '{')
					stk.pop();
				else
				{
					av = 0;
					break;
				}
			}
			else if (s[i] == '>')
			{
				if (stk.top() == '<')
					stk.pop();
				else
				{
					av = 0;
					break;
				}
			}
		}
		if (stk.size() != 0) av = 0;
		cout << "#" << tc << " " << av << '\n';
	}
	return 0;
}