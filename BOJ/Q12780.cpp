#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s, k;
	cin >> s >> k;
	int ls = s.length(), lk = k.length(), r = 0;
	for (int i = 0; i <= ls - lk; i++)
		if (!k.compare(s.substr(i, lk))) r++;
	cout << r << endl;
	return 0;
}