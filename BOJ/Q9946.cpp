#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string b, a;
	int * aa, * ba, la, lb, e, t = 1;
	while (1)
	{
		cin >> b >> a;
		lb = b.length();
		la = a.length();
		e = 1;
		if (!b.compare("END") && !a.compare("END")) break;
		cout << "Case " << t++;
		if (la != lb) cout << ": different" << endl;
		else
		{
			ba = new int[26];
			fill_n(ba, 26, 0);
			aa = new int[26];
			fill_n(aa, 26, 0);
			for (int i = 0; i < lb; i++) ba[b[i] - 97]++;
			for (int i = 0; i < la; i++) aa[a[i] - 97]++;
			for (int i = 0; i < 26; i++) 
				if (ba[i] != aa[i])
				{
					e = 0;
					break;
				}
			if (!e) cout << ": different" << endl;
			else cout << ": same" << endl;
		}
	}
	return 0;
}