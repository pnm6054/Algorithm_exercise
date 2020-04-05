#include <iostream>
using namespace std;

int main(void)
{
	int t, h, m, th, tm;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> h >> m >> th >> tm;
		m += tm;
		if (m / 60) h++;
		m %= 60;
		h += th;
		h %= 12;
		cout << "#" << i << " " << h << " " << m << '\n';
	}
	return 0;
}