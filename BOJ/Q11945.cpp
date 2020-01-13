#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	string s;
	cin >> n;
	getline(cin, s);
	while (n--)
	{
		getline(cin, s);
		reverse(s.begin(), s.end());
		cout << s << endl;
	}
	return 0;
}