#include <iostream>
using namespace std;

int main(void)
{
	int i, c[6] = { 1,1,2,2,2,8 };
	for (int j = 0; j < 6; j++)
	{
		cin >> i;
		cout << c[j] - i << " ";
	}
	return 0;
}