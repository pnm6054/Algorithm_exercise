#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	if (n == 1)
		cout << "*";
	else
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (j % 2) cout << " ";
				else cout << "*";
			}
			cout << endl;
			for (int j = 0; j < n; j++)
			{
				if (j % 2) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
	return 0;
}