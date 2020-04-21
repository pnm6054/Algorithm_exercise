#include <iostream>
using namespace std;
using ll = long long;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int test_case;
	int T;
	ll L;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> L;
		cout << ((L - 1) / 2) * ((L - 1) / 2) << '\n';
	}

	return 0;
}