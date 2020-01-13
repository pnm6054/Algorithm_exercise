#include <iostream>
using namespace std;

int main(void)
{
	int a[21] = { 0, }, b, e;
	for (int i = 0; i < 21; i++)
		a[i] = i;
	for (int i = 0; i < 10; i++)
	{
		cin >> b >> e;
		for (int j = 0; j < (e - b + 1) / 2; j++)
			swap(a[b + j], a[e - j]);
	}
	for (int i = 1; i < 21; i++)
		cout << a[i] << " ";
	return 0;
}