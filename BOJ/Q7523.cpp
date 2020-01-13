#include <iostream>
using namespace std;

int main(void)
{
	int t;
	long long n, m;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cout << "Scenario #" << i + 1 << ":" << endl;
		cin >> n >> m;
		cout << (n + m) * (m - n + 1) / 2 << endl << endl;
	}
	return 0;
}