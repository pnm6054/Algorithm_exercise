#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n, len;
	cin >> n;
	string * fs = new string[n];
	for (int i = 0; i < n; i++)
		cin >> fs[i];
	len = fs[0].length();
	for (int i = 0; i < len; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (fs[0][i] != fs[j][i])
			{
				fs[0][i] = '?';
				break;
			}
		}
	}
	cout << fs[0] << endl;
	return 0;
}