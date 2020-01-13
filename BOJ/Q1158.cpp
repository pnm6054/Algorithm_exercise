#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	int n, m, s = 0, t;
	list<int> l, r;
	list<int>::iterator it;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		l.push_back(i);
	while (1)
	{
		if (l.empty()) break;
		for (it = l.begin(); it != l.end(); it++)
		{
			s++;
			if (s % m == 0)
			{
				r.push_back(*it);
				*it = 0;
			}
		}
		l.remove(0);
	}
	printf("<");
	for (it = r.begin(); it != r.end(); it++)
	{
		if (it != r.begin()) printf(", ");
		printf("%d", *it);
	}
	printf(">");
	return 0;
}