#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int l, n;
	bool t;
	cin >> n;
	for (int i = n; i > 3; i--)
	{
		t = true;
		s = to_string(i);
		l = s.length();
		for (int j = 0; j < l; j++)
		{
			if (s[j] != '4' && s[j] != '7')
			{
				t = false;
				break;
			}
		}
		if (t)
		{
			cout << i << '\n';
			break;
		}
	}
	return 0;
}