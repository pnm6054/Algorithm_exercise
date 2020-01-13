#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char * i = new char[50];
	cin >> i;
	int n = 10;
	for (int j = 1; j < strlen(i); j++)
	{
		if (i[j] == i[j - 1]) n += 5;
		else n += 10;
	}
	cout << n;
	return 0;
}