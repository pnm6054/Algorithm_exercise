#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int s1, s2, s3, sum[81] = { 0, }, mx = 0, index;
	cin >> s1 >> s2 >> s3;
	for (int i = 1; i <= s1; i++)
	{
		for (int j = 1; j <= s2; j++)
		{
			for (int k = 1; k <= s3; k++)
			{
				sum[i + j + k]++;
			}
		}
	}
	for (int i = 0; i < 81; i++)
	{
		if (mx < sum[i])
		{
			mx = sum[i];
			index = i;
		}
	}
	cout << index << '\n';
	return 0;
}