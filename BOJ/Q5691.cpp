#include <iostream>
using namespace std;

int main(void)
{
	int a = 1, b = 1;
	while (1)
	{
		cin >> a >> b;
		if (!a && !b) break;
		cout << a - (b - a) << endl;
	}
	return 0;
}