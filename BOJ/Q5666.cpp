#include <iostream>
using namespace std;

int main(void)
{
	int h, p;
	while (scanf("%d %d", &h, &p) != EOF)
		printf("%.2f\n", h / double(p));
	return 0;
}