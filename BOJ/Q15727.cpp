#include <iostream>
using namespace std;

int main(void)
{
	int L;
	cin >> L;
	cout << ((L % 5 == 0) ? (L / 5) : (L / 5 + 1)) << endl;
	return 0;
}
