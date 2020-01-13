#include <iostream>
using namespace std;

int main(void)
{
	int n, k;
	char t;
	cin >> n;
	char ** m = new char*[n];
	for (int i = 0; i < n; i++)
	{
		m[i] = new char[n];
		for (int j = 0; j < n; j++)
		{
			cin >> t;
			m[i][j] = t;
		}
	}
	cin >> k;
	switch (k)
	{
	case 1:
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << m[i][j];
			}
			cout << endl;
		}
		break;
	case 2:
		for (int i = 0; i < n; i++)
		{
			for (int j = n - 1; j > -1; j--)
			{
				cout << m[i][j];
			}
			cout << endl;
		}
		break;
	case 3:
		for (int i = n - 1; i > -1; i--)
		{
			for (int j = 0; j < n; j++)
			{
				cout << m[i][j];
			}
			cout << endl;
		}
		break;
	}
	return 0;
}