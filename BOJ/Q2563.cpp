#include <iostream>
using namespace std;

int main(void)
{
	int p[100][100], n, a, b, s = 0;
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			p[i][j] = 0;
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		for (int i = a; i < a + 10; i++)
			for (int j = b; j < b + 10; j++)
				if (!p[i][j]) p[i][j] = 1;
	}
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			s += p[i][j];
	cout << s << endl;
	return 0;
}