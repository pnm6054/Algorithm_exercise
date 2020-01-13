#include <iostream>
using namespace std;

int main(void)
{
	int h, m, d, c;
	cin >> h >> m >> d;
	c = (m + d) / 60;
	m = (m + d) % 60;
	h = (h + c) % 24;
	cout << h << " " << m << endl;
	return 0;
}