#include <iostream>
using namespace std;

int main(void)
{
	int y = 0, t, c = 4;
	while (c--)
	{
		cin >> t;
		y += t;
	}
	cout << y / 60 << endl << y % 60 << endl;
	return 0;
}