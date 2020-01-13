#include <iostream>
using namespace std;

int main(void)
{
	int *c = new int[10], tc, a = 0, b = 0;
	for (int i = 0; i < 20; i++)
	{
		if (i < 10) cin >> c[i];
		else
		{
			cin >> tc;
			if (c[i- 10] > tc) a++;
			else if (c[i - 10] < tc) b++;
		}
	}
	if (a > b) cout << "A" << endl;
	else if (a < b) cout << "B" << endl;
	else cout << "D" << endl;
	return 0;
}