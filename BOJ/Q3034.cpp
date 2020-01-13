#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int n, w, h, max, i;
	cin >> n >> w >> h;
	max = int(floor(sqrt(h*h + w * w)));
	while (n--)
	{
		cin >> i;
		if (i <= max) cout << "DA" << endl;
		else cout << "NE" << endl;
	}
	return 0;
}