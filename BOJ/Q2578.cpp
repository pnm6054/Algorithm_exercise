#include <iostream>
using namespace std;

int main(void)
{
	int n, t;
	int **b = new int*[5];
	for (int i = 0; i < 5; i++)
	{
		b[i] = new int[5];
		for (int j = 0; j < 5; j++)
			cin >> b[i][j];
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> t;

		}
	}
	return 0;
}