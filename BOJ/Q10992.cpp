#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i; j++) cout << " ";
		if (i == 0) cout << "*";
		else if (i == n - 1) for (int k = 0; k < 2 * n - 1; k++)	cout << "*";
		else
		{
			cout << "*";
			for (int k = 0; k < 2 * i - 1; k++) cout << " ";
			cout << "*";
		}
		cout << endl;
	}
}