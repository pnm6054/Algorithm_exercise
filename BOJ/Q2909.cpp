#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
	int k, r;
	double c;
	cin >> c >> k;
	for (int i = 0; i < k; i++)
		c /= 10;
	c = round(c);
	r = (int)c;
	for (int i = 0; i < k; i++)
		r *= 10;
	cout << r << endl;
	return 0;
}