#include <iostream>
using namespace std;

int main(void)
{
	int n, i, p;
	while (1)
	{
		cin >> n;
		if (!n) break;
		cin >> i;
		cout << i << ' ';
		p = i;
		n--;
		while (n--)
		{
			cin >> i;
			if (p != i) cout << i << ' ';
			p = i;
		}
		cout << '$' << endl;
	}
	return 0;
}