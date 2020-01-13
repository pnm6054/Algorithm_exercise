#include <iostream>
using namespace std;

int main(void)
{
	int t;
	double d;
	char c;
	cin >> t;
	while (t--)
	{
		cin >> d;
		c = getchar();
		while (c != '\n')
		{
			if ((c = getchar()) != ' ')
			{
				if (c == '@') d *= 3;
				else if (c == '%') d += 5;
				else if (c == '#') d -= 7;
			}
		}
		printf("%.2f\n", d);
	}
	return 0;
}