#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < 2 * n - 1; i++)
	{
		if (i < n)
		{
			for (int j = 0; j < i + 1; j++) cout << "*";
			cout << endl;
		}
		else
		{
			for (int j = 0; j < 2 * n - 1 - i; j++) cout << "*";
			cout << endl;
		}
	}
	return 0;
}