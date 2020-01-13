#include <iostream>
using namespace std;

int main(void)
{
	int n, sa, sb, a = 0, b = 0;
	cin >> n;
	while (n--)
	{
		cin >> sa >> sb;
		if (sa > sb) a++;
		else if (sa < sb) b++;
	}
	cout << a << " " << b << endl;
	return 0;
}