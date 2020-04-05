#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	char ap[10][4] = { "ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIZ", "SVN", "EGT", "NIN" };
	char ttt[20];
	int n, t, *lst;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> ttt >> n;
		lst = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> ttt;
			if (ttt[0] == ap[0][0] && ap[0][0] == 'Z')
				lst[i] = 0;
			else if (ttt[0] == ap[1][0] && ap[1][0] == 'O')
				lst[i] = 1;
			else if (ttt[0] == ap[2][0] && ttt[1] == 'W')
				lst[i] = 2;
			else if (ttt == ap[3] && ttt[1] == 'O')
				lst[i] = 3;
			else if (ttt == ap[4] && ttt[0] == 'F')
				lst[i] = 4;
			else if (ttt == ap[5])
				lst[i] = 5;
			else if (ttt == ap[6])
				lst[i] = 6;
			else if (ttt == ap[7])
				lst[i] = 7;
			else if (ttt == ap[8])
				lst[i] = 8;
			else if (ttt == ap[9])
				lst[i] = 9;
		}
		for (int i = 0; i < n; i++)
			cout << lst[i] << " ";
	}
	return 0;
}