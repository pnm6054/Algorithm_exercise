#include <iostream>
using namespace std;

int main(void)
{
	int N, c, t, r = 0;
	cin >> N;
	t = N;
	while (N--)
	{
		cin >> c;
		r += c;
	}
	cout << r - t + 1 << endl;
	return 0;
}