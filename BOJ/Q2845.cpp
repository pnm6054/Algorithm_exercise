#include <iostream>
using namespace std;

int main(void)
{
	int l, p, np;
	cin >> l >> p;
	for (int i = 0; i < 5; i++)
	{
		cin >> np;
		cout << np - l * p << " ";
	}
	return 0;
}