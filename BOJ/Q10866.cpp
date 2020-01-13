#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(void)
{
	int n, v;
	string s;
	deque<int> dq;
	cin >> n;
	while (n--)
	{
		cin >> s;
		if (!s.compare("push_front"))
		{
			cin >> v;
			dq.push_front(v);
		}
		else if (!s.compare("push_back"))
		{
			cin >> v;
			dq.push_back(v);
		}
		else if (!s.compare("pop_front"))
			if (!dq.empty())
			{
				cout << dq.front() << endl;
				dq.pop_front();
			}
			else
				cout << -1 << endl;
		else if (!s.compare("pop_back"))
			if (!dq.empty())
			{
				cout << dq.back() << endl;
				dq.pop_back();
			}
			else
				cout << -1 << endl;
		else if (!s.compare("size"))
			cout << dq.size() << endl;
		else if (!s.compare("empty"))
			if (dq.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		else if (!s.compare("front"))
			if (!dq.empty())
				cout << dq.front() << endl;
			else
				cout << -1 << endl;
		else if (!s.compare("back"))
			if (!dq.empty())
				cout << dq.back() << endl;
			else
				cout << -1 << endl;
	}
	return 0;
}