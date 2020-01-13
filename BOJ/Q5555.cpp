#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string f, r;
	int n, res = 0;
	cin >> f >> n;
	while (n--)
	{
		cin >> r;
		r = r + r + r;
		if (r.find(f) != -1)
			res++;
	}
	cout << res << endl;
	return 0;
}