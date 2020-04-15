#include <iostream>
using namespace std;

int main(void)
{
	int test_case;
	int T, N, priv, next, up, down;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		up = 0, down = 0;
		cin >> N;
		cin >> priv;
		for (int i = 0; i < N - 1; i++)
		{
			cin >> next;
			if (priv < next && ((next - priv) > up))
				up = next - priv;
			else if (next < priv && ((priv - next) > down))
				down = priv - next;
			priv = next;
		}
		cout << "#" << test_case << " " << up << " " << down << endl;
	}
	return 0;
}