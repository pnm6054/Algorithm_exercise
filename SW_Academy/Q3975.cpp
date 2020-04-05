#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, a, b, c, d;
	double al, bo;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> a >> b >> c >> d;
		al = a / (double)b;
		bo = c / (double)d;
		cout << "#" << tc << " ";
		if (al > bo)
			cout << "ALICE\n";
		else if (bo > al)
			cout << "BOB\n";
		else
			cout << "DRAW\n";
	}
	return 0;
}