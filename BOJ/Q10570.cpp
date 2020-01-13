#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n, v, s, max;
	vector<int> a;
	scanf("%d", &n);
	while (n--)
	{
		a.assign(1002, 0);
		max = 0;
		scanf("%d", &v);
		while(v--)
		{
			scanf("%d", &s);
			a[s]++;
			if (a[s] > max) max = a[s];
		}
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] == max) 
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}