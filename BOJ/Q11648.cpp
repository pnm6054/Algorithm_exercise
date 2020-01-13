#include <iostream>
using namespace std;

int hpykep(int n)
{
	int k = 1;
	while (n)
	{
		k *= (n % 10);
		n /= 10;
	}
	return k;
}

int main(void)
{
	int t, r = 0;
	cin >> t;
	while (t > 9)
	{
		t = hpykep(t);
		r++;
	}
	cout << r << endl;
	return 0;
}