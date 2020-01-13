#include <iostream>
using namespace std;

int main(void)
{
	int g[6] = { 1,2,3,3,4,10 }, s[7] = { 1,2,2,2,3,5,10 }, t, n, gt, st;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		gt = 0, st = 0;
		for (int j = 0; j < 6; j++)
		{
			cin >> n;
			gt += (g[j] * n);
		}
		for (int j = 0; j < 7; j++)
		{
			cin >> n;
			st += (s[j] * n);
		}
		cout << "Battle " << i + 1 << ": ";
		if (gt > st) cout << "Good triumphs over Evil" << endl;
		else if (gt < st) cout << "Evil eradicates all trace of Good" << endl;
		else cout << "No victor on this battle field" << endl;
	}
	return 0;
}