#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
	string al[7] = { "", "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh" };
	string aal[7] = { "", "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh" };
	int t, a, b;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		cout << "Case " << i + 1 << ": ";
		if (a == b)
			cout << aal[a] << endl;
		else if (max(a, b) == 6 && min(a, b) == 5)
			cout << "Sheesh Beesh" << endl;
		else
			cout << al[max(a, b)] << " " << al[min(a, b)] << endl;
	}
	return 0;
}