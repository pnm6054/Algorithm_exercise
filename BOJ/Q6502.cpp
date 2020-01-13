#include <iostream>
using namespace std;

int main(void)
{
	int i = 1;
	double r, w, l;
	while (1)
	{
		cin >> r;
		if (!r) break;
		cin >> w >> l;
		w /= 2;
		l /= 2;
		if (r * r >= (w * w + l * l))
			cout << "Pizza " << i++ << " fits on the table." << endl;
		else
			cout << "Pizza " << i++ << " does not fit on the table." << endl;
	}
	return 0;
}