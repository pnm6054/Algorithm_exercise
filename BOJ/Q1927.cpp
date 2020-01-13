#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	int n, x;
	priority_queue<int> pq;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &x);
		if (!x)
		{
			if (pq.empty()) printf("%d\n", 0);
			else
			{
				printf("%d\n", pq.top() * -1);
				pq.pop();
			}
		}
		else
			pq.push(x * -1);
	}
	return 0;
}