#include <iostream>
using namespace std;

int main(void)
{
	long long t, a, b, c;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b >> c;
		cout << "Scenario #" << i + 1 << ":" << endl << (((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))? "yes": "no") << endl << endl;
	}
	return 0;
}