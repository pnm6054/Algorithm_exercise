#include <iostream>
using namespace std;

int main(void)
{
	int a, b, r = 0;
	cin >> a >> b;
	switch (a - b)
	{
	case -2:
	case 1:
		r = 1;
	}
	if (r) cout << "A";
	else cout << "B";
	return 0;
}