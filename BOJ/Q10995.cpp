#include <iostream>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	for (int n = 0; n < t; n++)
	{
		if (n % 2 == 0) cout << "*";
		else cout << " *";
		for (int i = 0; i < t - 1; i++) cout << " *";
		cout << endl;
	}
	return 0;
}