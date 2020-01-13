#include <iostream>
using namespace std;

int main(void)
{
	int m, d, r = 0;
	cin >> m >> d;
	if (m < 2) r = -1;
	else if (m > 2) r = 1;
	else
	{
		if (d > 18) r = 1;
		else if (d < 18) r = -1;
	}
	if (r > 0) cout << "After" << endl;
	else if (r < 0) cout << "Before" << endl;
	else cout << "Special" << endl;
	return 0;
}