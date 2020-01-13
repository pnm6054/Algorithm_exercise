#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string input, vrc;
	vector<string> v;
	cin >> input >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> vrc;
		for (int j = 0; j < 10; j++)
			if (j < 9)
			{
				if (input[j] == '*')
					continue;
				else
				{
					if (input[j] != vrc[j]) break;
				}
			}
			else
				v.push_back(vrc);
	}
	n = v.size();
	cout << n << '\n';
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << '\n';
	}
	return 0;
}