#include <iostream>
using namespace std;

int main(void)
{
	int t, a, b;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		cout << (a / b) * (a / b) << endl;
	}
	return 0;
}