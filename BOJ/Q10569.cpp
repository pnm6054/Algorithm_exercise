#include <iostream>
using namespace std;

int main(void)
{
	int t, v, e;
	cin >> t;
	while (t--)
	{
		cin >> v >> e;
		cout << e - v + 2 << endl;
	}
	return 0;
}