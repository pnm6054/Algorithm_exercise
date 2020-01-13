#include <iostream>
using namespace std;

int main(void)
{
	char a;
	int cs = 0, i = 0;
	while ((a = getchar()) != '#')
	{
		if (a == '\n')
		{
			cout << cs << endl;
			cs = i = 0;
			continue;
		}
		i++;
		if (a >= 'A' && a <= 'Z')
			cs += i * (a - 64);
	}
	return 0;
}