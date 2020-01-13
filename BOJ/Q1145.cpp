#include <iostream>
using namespace std;

int lcd(int a, int b)
{
	int tmp, p, q;
	if (a < b)
		swap(a, b);
	p = a;
	q = b;
	while (b)
	{
		tmp = b;
		b = a % tmp;
		a = tmp;
	}
	return p * q / a;
}

int main(void)
{
	int n[5] = { 0, }, min = 100000000, lcdn;
	for (int i = 0; i < 5; i++)
		cin >> n[i];
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			for (int k = j + 1; k < 5; k++)
			{
				lcdn = lcd(lcd(n[i], n[j]), lcd(n[j], n[k]));
				if (min > lcdn) min = lcdn;
			}
		}
	}
	cout << min << endl;
	return 0;
}