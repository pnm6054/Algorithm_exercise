#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	long long n;
	string s;
	char buffer[2];
	cin >> n; 
	while (n)
	{
		if (n % 2 == 0) s.append("0");
		else s.append("1");
		n /= 2;
	}
	reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;
}