#include <iostream>
using namespace std;

int main(void)
{
	int h, m, d;
	cin >> h >> m;
	if (m >= 45) m -= 45;
	else
	{
		m += 15;
		if (h == 0) h = 23;
		else h -= 1;
	}
	cout << h << " " << m << endl;
	return 0;
}