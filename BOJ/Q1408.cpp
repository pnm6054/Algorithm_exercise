#include <cstdio>

int main(void)
{
	int nh, nm, ns, mh, mm, ms, n, m, r;
	scanf("%2d:%2d:%2d\n%2d:%2d:%2d", &nh, &nm, &ns, &mh, &mm, &ms);
	n = nh * 3600 + nm * 60 + ns;
	m = mh * 3600 + mm * 60 + ms;
	if (n < m) r = m - n;
	else r = 86400 - n + m;
	printf("%02d:", r / 3600);
	r %= 3600;
	printf("%02d:", r / 60);
	r %= 60;
	printf("%02d\n", r);
	return 0;
}