#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int n, l, t;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		s = to_string(i);
		l = s.length();
		t = 0;
		for (int j = 0; j < l; j++)
			if ((s[j] - 48) != 0 && (s[j] - 48) % 3 == 0) t++;
		if (t)
			for (int j = 0; j < t; j++)
				cout << "-";
		else
			cout << s;
		cout << " ";
	}
	return 0;
}