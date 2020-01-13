#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int h, m, s, d, c;
	cin >> h >> m >> s >> d;
	s += d;
	d = s / 60;
	s %= 60;
	m += d;
	d = m / 60;
	m %= 60;
	h += d;
	h %= 24;
	printf("%d %d %d\n", h, m, s);
	return 0;
}