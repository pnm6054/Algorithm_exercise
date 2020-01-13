#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a2[4] = { 2,4,8,6 }, a3[4] = { 3,9,7,1 }, a4[2] = { 4,6 }, a7[4] = { 7,9,3,1 }, a8[4] = { 8,4,2,6 }, a9[2] = { 9,1 }, t, a, b, r;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		b--;
		switch (a % 10)
		{
		case 0:
			r = 10;
			break;
		case 1:
			r = 1;
			break;
		case 2:
			r = a2[b % 4];
			break;
		case 3:
			r = a3[b % 4];
			break;
		case 4:
			r = a4[b % 2];
			break;
		case 5:
			r = 5;
			break;
		case 6:
			r = 6;
			break;
		case 7:
			r = a7[b % 4];
			break;
		case 8:
			r = a8[b % 4];
			break;
		case 9:
			r = a9[b % 2];
			break;
		}
		cout << r << "\n";
	}
	return 0;
}