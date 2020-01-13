#include <iostream>
using namespace std;

int main(void)
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	if (x > w - x)
		if (y > h - y)
			cout << (((w - x) < (h - y)) ? w - x : h - y) << endl;
		else
			cout << (((w - x) < y) ? w - x : y) << endl;
	else
		if (y > h - y)
			cout << ((x < (h - y)) ? x : h - y) << endl;
		else
			cout << (x < y ? x : y) << endl;
	return 0;
}