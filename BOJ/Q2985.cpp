#include <iostream>
using namespace std;

int main(void)
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b == c)
		cout << int(a) << "+" << int(b) << "=" << int(c) << endl;
	else if (a - b == c)
		cout << int(a) << "-" << int(b) << "=" << int(c) << endl;
	else if (a * b == c)
		cout << int(a) << "*" << int(b) << "=" << int(c) << endl;
	else if (a / b == c)
		cout << int(a) << "/" << int(b) << "=" << int(c) << endl;
	else
	{
		if (b + c == a)
			cout << int(a) << "=" << int(b) << "+" << int(c) << endl;
		else if (b - c == a)
			cout << int(a) << "=" << int(b) << "-" << int(c) << endl;
		else if (b * c == a)
			cout << int(a) << "=" << int(b) << "*" << int(c) << endl;
		else if (b / c == a)
			cout << int(a) << "=" << int(b) << "/" << int(c) << endl;
	}
	return 0;
}