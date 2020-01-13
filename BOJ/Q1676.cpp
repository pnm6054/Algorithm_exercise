#include <iostream>
using namespace std;

int main(void)
{
	int n, s = 0, t;
	cin >> n;
	for (int i = 5; i <= n; i += 5)
	{
		t = i;
		while (t % 5 == 0)
		{
			s++;
			t /= 5;
		}
	}
	cout << s << endl;
	return 0;
}