#include <iostream>
using namespace std;

int main(void)
{
	int m[42] = { 0, };
	int t = 10, i, r = 0;
	while (t--)
	{
		cin >> i;
		m[i % 42]++;
	}
	for (int j = 0; j < 42; j++)
		if (m[j] != 0) r++;
	cout << r << endl;
	return 0;
}