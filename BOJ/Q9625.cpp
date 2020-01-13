#include <iostream>
using namespace std;

int main(void)
{
	int n;
	long long a = 1, b = 0, t;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		t = b;
		b = a + b;
		a = t;
	}
	cout << a << " " << b << endl;
	return 0;
}