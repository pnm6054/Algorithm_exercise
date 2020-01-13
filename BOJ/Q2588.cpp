#include <iostream>
using namespace std;

int main(void)
{
	int n1, n2, mul;
	cin >> n1 >> n2;
	mul = n1 * n2;
	cout << n1 * (n2 % 10) << endl;
	cout << n1 * (n2 % 100 - n2 % 10) / 10 << endl;
	cout << n1 * (n2 / 100) << endl;
	cout << mul << endl;
	return 0;
}