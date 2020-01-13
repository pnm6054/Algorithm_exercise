#include <iostream>
using namespace std;

long long td(long long o, long long h)
{
	if (o == 0) return 1;
	else if (h == 0) return td(o - 1, 1);
	else return td(o - 1, h + 1) + td(o, h - 1);
}

int main(void)
{
	long long n;
	while (1)
	{
		cin >> n;
		if (!n) break;
		cout << td(n, 0) << endl;
	}
	return 0;
}