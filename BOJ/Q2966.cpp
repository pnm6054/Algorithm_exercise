#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	int a = 0, b = 0, c = 0, ca = 2, n, mx;
	char aa = 'A', ba = 'B';
	string s;
	cin >> n >> s;
	for (int i = 0; i < n; i++)
	{
		if (s[i] - 65 == (aa + i - 65) % 3) a++;
		if (s[i] == ba + (i % 2) * (((i+1) / 2) % 2 == 0 ? 1 : -1)) b++;
		if (s[i] - 65 == ca % 3) c++;
		ca += (i % 2);
	}
	mx = max(max(a, b), c);
	cout << mx << '\n';
	if (mx == a)
		cout << "Adrian\n";
	if (mx == b)
		cout << "Bruno\n";
	if (mx == c)
		cout << "Goran\n";
	return 0;
}