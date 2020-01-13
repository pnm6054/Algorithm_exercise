#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;
	a--, b--;
	cout << (abs(a % 4 - b % 4) + abs(b / 4 - a / 4)) << '\n';
	return 0;
}