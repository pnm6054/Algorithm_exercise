#include <iostream>
using namespace std;

int main(void)
{
	int t, a, b, ta, tb, tmp;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		ta = a, tb = b;
		while (tb)
		{
			tmp = tb;
			tb = ta % tb;
			ta = tmp;
		}
		cout << ta * (a / ta) * (b / ta) << endl;
	}
	return 0;
}