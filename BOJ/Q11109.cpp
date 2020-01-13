#include <iostream>
using namespace std;

int main(void)
{
	int t, d, n, s, p;
	cin >> t;
	while (t--)
	{
		cin >> d >> n >> s >> p;
		s *= n;
		p = d + p * n;
		if (s < p)
			cout << "do not parallelize" << endl;
		else if (s > p)
			cout << "parallelize" << endl;
		else
			cout << "does not matter" << endl;
	}
	return 0;
}