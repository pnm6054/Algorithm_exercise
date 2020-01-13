#include <iostream>
#include <string>
#define KGTOF 2.2046
#define FTOKG 0.4536
#define LTOG 0.2642
#define GTOL 3.7854
using namespace std;

int main(void)
{
	int t;
	double v;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> v >> s;
		if (!s.compare("kg"))
			printf("%.4f lb\n", v * KGTOF);
		else if (!s.compare("lb"))
			printf("%.4f kg\n", v * FTOKG);
		else if (!s.compare("l"))
			printf("%.4f g\n", v * LTOG);
		else if (!s.compare("g"))
			printf("%.4f l\n", v * GTOL);
	}
	return 0;
}