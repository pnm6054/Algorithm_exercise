#include <iostream>

int main(void)
{
	int  bc = 0, sc = 0, n = 0, s = 0;
	char c;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ') s++;
		else if (c >= '0' && c <= '9') n++;
		else if (c >= 'a' && c <= 'z') sc++;
		else if (c >= 'A' && c <= 'Z') bc++;
		if (c == '\n')
		{
			printf("%d %d %d %d\n", sc, bc, n, s);
			bc = sc = n = s = 0;
		}
	}
	return 0;
}