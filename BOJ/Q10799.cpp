#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	string p;
	int l, s = 0, t = 0;
	stack<int> stk;
	cin >> p;
	l = p.length();
	for (int i = 0; i < l; i++)
	{
		if (p[i] == '(' && p[i + 1] == ')')
		{
			s += stk.size();
			i++;
		}
		else if (p[i] == '(')
		{
			stk.push(1);
		}
		else
		{
			stk.pop();
			s++;
		}
	}
	cout << s << endl;
	return 0;
}