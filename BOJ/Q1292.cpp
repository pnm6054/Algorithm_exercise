#include <iostream>
using namespace std;

int main(void)
{
	int a, b, sum = 0, t = 0;
	cin >> a >> b;
	for (int i = 1; 1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			t++;
			if (t > b) break;
			if (t >= a) sum += i;
		}
		if (t > b) break;
	}
	cout << sum << endl;
	return 0;
}