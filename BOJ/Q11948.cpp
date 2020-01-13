#include <iostream>
using namespace std;

int main(void)
{
	int r[6] = { 0, }, min = 100, sum;
	for (int i = 0; i < 6; i++)
	{
		cin >> r[i];
		if (i < 4)
			if (min > r[i]) min = r[i];
	}
	sum = r[4] > r[5] ? r[4] : r[5];
	for (int i = 0; i < 4; i++)
	{
		if (r[i] == min)
		{
			min = 101;
			continue;
		}
		sum += r[i];
	}
	cout << sum << endl;
	return 0;
}