#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int a, b, t, s = 0;
	cin >> a >> b;
	vector<int> va(a);
	for (int i = 0; i < a; i++)
		cin >> va[i];
	sort(va.begin(), va.end());
	for (int i = 0; i < b; i++)
	{
		cin >> t;
		if (binary_search(va.begin(), va.end(), t))
			s++;
	}
	cout << a + b - 2 * s << endl;
	return 0;
}