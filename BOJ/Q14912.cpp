#include <iostream>
#include <string>;
using namespace std;

int main(void)
{
	int n, l, r = 0;
	string s, d;
	cin >> n >> d;
	for (int i = 1; i <= n; i++)
	{
		s = to_string(i);
		l = s.length();
		for (int j = 0; j < l; j++)
		{
			if (s[j] == d[0]) r++;
		}
	}
	cout << r << endl;
	return 0;
}