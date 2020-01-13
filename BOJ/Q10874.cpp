#include <iostream>
using namespace std;

int main(void)
{
	int n, t, e;
	cin >> n;
	for (int i = 1; i < n + 1; i++)
	{
		e = 0;
		for (int j = 0; j < 10; j++)
		{
			cin >> t;
			if ((j % 5)+1 != t)
				e = 1;
		}
		if (!e) cout << i << endl;
	}
	return 0;
}