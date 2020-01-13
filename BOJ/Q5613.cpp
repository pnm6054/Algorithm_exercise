#include <iostream>
using namespace std;

int main(void)
{
	bool e = 1;
	long long r, o;
	char i;
	cin >> r;
	while (e)
	{
		cin >> i;
		switch (i)
		{
		case '+':
			cin >> o;
			r += o;
			break;
		case '-':
			cin >> o;
			r -= o;
			break;
		case '*':
			cin >> o;
			r *= o;
			break;
		case '/':
			cin >> o;
			r /= o;
			break;
		case '=':
			e = 0;
		}
	}
	cout << r << endl;
	return 0;
}