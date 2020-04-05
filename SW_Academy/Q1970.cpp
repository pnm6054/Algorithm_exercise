#include <iostream>
using namespace std;

int main(void)
{
	int t, m;
	for (int i = 1; i <= t; i++)
	{
		cin >> m;
		cout << "#" << i << " ";
		if (m >= 50000)
		{
			cout << m / 50000 << " ";
			m %= 50000;
		}
		if (m >= 10000)
		{
			cout << m / 10000 << " ";
			m %= 10000;
		}
		if (m >= 5000)
		{
			cout << m / 5000 << " ";
			m %= 5000;
		}
		if (m >= 1000)
		{
			cout << m / 1000 << " ";
			m %= 1000;
		}
		if (m >= 500)
		{
			cout << m / 500 << " ";
			m %= 500;
		}
		if (m >= 100)
		{
			cout << m / 100 << " ";
			m %= 100;
		}
		if (m >= 50)
		{
			cout << m / 50 << " ";
			m %= 50;
		}
		if (m >= 10)
		{
			cout << m / 10 << " ";
			m %= 10;
		}
		cout << '\n';
	}
	return 0;
}