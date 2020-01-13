#include <iostream>
using namespace std;

int main(void)
{
	int t, y = 0, k = 0, t1, t2;
	cin >> t;
	while (t--)
	{
		for (int i = 0; i < 9; i++)
		{
			cin >> t1 >> t2;
			y += t1;
			k += t2;
		}
		if (y > k) cout << "Yonsei" << endl;
		else if (y < k) cout << "Korea" << endl;
		else cout << "Draw" << endl;
	}
	return 0;
}