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
			for (int j = 0; j < n - i - 1; j++) cout << " ";
			for (int j = 0; j < 2 * (i + 1) - 1; j++) cout << "*";
			cout << endl;
		}
		else
		{
			for (int j = 0; j < i - n + 1; j++) cout << " ";
			for (int j = 0; j < 2 * (2 * n - 2 - i) + 1; j++) cout << "*";
			cout << endl;
		}
	}
	return 0;
}