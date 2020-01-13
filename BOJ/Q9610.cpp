#include <iostream>
using namespace std;

int main(void)
{
	int t;
	int a, b;
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		if (a > 0)
			if (b > 0) q1++;
			else if (b < 0) q4++;
			else axis++;
		else if (a < 0)
			if (b > 0) q2++;
			else if (b < 0) q3++;
			else axis++;
		else
			axis++;
	}
	cout << "Q1: " << q1 << "\nQ2: " << q2 << "\nQ3: " << q3 << "\nQ4: " << q4 << "\nAXIS: " << axis << endl;
	return 0;
}