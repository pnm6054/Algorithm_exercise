#include <iostream>
using namespace std;

int main(void)
{
	int a[10] = { 0, }, b[10] = { 0, }, wa = 0, wb = 0, lw = 0;
	for (int i = 0; i < 10; i++)
		scanf("%d", a + i);
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", b + i);
		if (b[i] > a[i])
		{
			wb += 3;
			lw = -1;
		}
		else if (b[i] < a[i])
		{
			wa += 3;
			lw = 1;
		}
		else
		{
			wa++;
			wb++;
		}
	}
	cout << wa << " " << wb << endl;
	if (wa > wb)
	{
		cout << 'A' << endl;
	}
	else if (wa < wb)
	{
		cout << 'B' << endl;
	}
	else
	{
		if (lw == -1)
			cout << 'B' << endl;
		else if (lw == 1)
			cout << 'A' << endl;
		else
			cout << 'D' << endl;
	}
	return 0;
}