#include <iostream>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < t - i - 1; j++)
			cout << " ";
		cout << "*";
		for (int j = 0; j < i; j++)
			cout << " *";
		cout << endl;
	}
	return 0;
}