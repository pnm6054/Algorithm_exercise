#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	for (int i = n; i > 0; i--)
	{
		for (int j = 1; j < i; j++) cout << " ";
		cout << "*";
		for (int j = 0; j < (n - i) * 2 - 1; j++) cout << " ";
		if (i != n)cout << "*";
		cout << endl;
	}
	return 0;
}