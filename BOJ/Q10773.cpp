#include <iostream>
using namespace std;

int main(void)
{
	int k, top = 0, i, s = 0;
	int * a = new int[100000];
	cin >> k;
	while (k--)
	{
		cin >> i;
		if (i != 0)
		{
			a[top] = i;
			top++;
		}
		else top--;
	}
	for (int i = 0; i < top; i++)
		s += a[i];
	cout << s << endl;
	return 0;
}