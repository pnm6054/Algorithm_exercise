#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, i, o, t[101] = { 0 }, min = 100, max = 0, res = 0;
	cin >> a >> b >> c;
	for (int j = 0; j < 3; j++)
	{
		cin >> i >> o;
		if (min > i) min = i;
		if (max < o) max = o;
		while (i < o)
			t[i++]++;
	}
	for (int k = min; k < max; k++)
	{
		switch (t[k])
		{
		case 3: res += (c * 3); break;
		case 2: res += (b * 2); break;
		case 1: res += a;
		}
	}
	cout << res << endl;
	return 0;
}